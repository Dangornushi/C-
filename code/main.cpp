#include "main.hpp"

//---------------------

int main( int argc, char **argv ) {
    ifstream ifs( argv[1] );
    string data;
    string put;
    string intvall;
    string intdata;
    string strvall;
    string ifvall;
    string whilevall;  // 検索文字列
    string vallname;

    int intint;
    int calc_x;
    int calc_y;
    int calc_ans;

    if (ifs.fail()) {
        cerr << "Failed to open file." << endl;
        return -1;
    }
    while (getline(ifs, data)) {
        if ( data.size() >= put.size () ) {
            if ( data.substr (0, 1) != "//" ) {
                if ( data.substr( 0, 4 ) == "int " ) {
                    intv ( data );
                } else
                if ( data.substr(0, 4) == "str " ) {
                    strd2 = strv ( data, strd );
                    //cout << strd2["y"] << endl;
                } else 
                if ( data.substr(0, 5) == "put \"" )  {
                    //cout << data.substr( 5 ) << endl;
                } else
                if ( data.substr(0, 4) == "put " ) {
                    vallname = Split(data, "put ", "b");
                    cout << strd2[vallname] << endl;
                }
            }
        } else { }
    }
    return 0;
}

//---------------------

string Split( string str, string separator, string j) {
    int i = 0;
    string datalis[1];
    string tstr = str + separator;
    long l = tstr.length(), sl = separator.length();
    string::size_type pos = 0, prev = 0;

    for (i = 0; i < 2 && pos < l && (pos = tstr.find(separator, pos)) != string::npos; prev = (pos += sl) ) {
        string item = tstr.substr(prev, pos - prev);
        datalis[i] = item;
        i++;
    }
    if ( j == "a" ) return datalis[0];
    if ( j == "b" ) return datalis[1];
    else return NULL;
}

//----------------------

void intv ( string data ) {
    string intvall, intdata;
    int intint;
    intvall = Split( data.substr( 4 ), "=", "a" );
    intdata = Split( data, "=", "b" );
    intint = atoi(intdata.c_str() );
    intd[intvall] = intint;
    return;
} 

//----------------------

map<string, string> strv ( string data, map<string, string> &m ) {
    string strvall;
    string strdata;
    strvall = Split( data.substr( 4 ), "= ", "a");
    strvall.erase(remove(  strvall.begin(),  strvall.end(),' '),  strvall.end() ) ;
    strdata = Split( data, "= ", "b");
    m[strvall] = strdata;
    return m;
}
