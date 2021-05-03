#include <iostream>
#include <string>
#include <fcntl.h>
#include <io.h>
using namespace std;

int main (){
    _set_mode(_fileno(stdout), _O_U16TEXT);
    string x;
    wcout << "\x03b2" << endl;
    getline(cin, x);
}