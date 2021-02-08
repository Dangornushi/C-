/* 2/5~ */
#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
#include <map>

//----------------------

using namespace std;

//----------------------

map <string, int> intd;
map <string, string> strd;
map <string, string> strd2;

//----------------------

string Split (  string str, string separator, string j ) ;
void intv ( string data ) ;
map<string, string> strv ( string data, map<string, string> &m ) ;
