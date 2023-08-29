#include <iostream>
#include "string.h"
#include <locale>
#include <vector>
#include <sstream>
#pragma comment(lib, "urlmon.lib")
//#include <curl/curl.h>
using namespace std;
const string REST_API = "https://rdb.altlinux.org/api/";
struct binary_package
{
    string name;
    int epoch;
    string version;
    string release;
    string arch;
    string disttag;
    int buildtime;
    string source;
};
void readList(string url,string branch, string arch){

};
void writeListJSON(){
    
};
void say_hello(){
    std::cout << "Hello, from test_rest_project!\n";
};
