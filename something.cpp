#include <iostream>
#include <string>

using std::cout;
using std::string;

int main () {

    string m = "hi";
    string n = "hello";
    m = n + m;
    std::cout << m << n;


    return 0;
}