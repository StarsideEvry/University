#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main() {
    int number;
    cout << "Enter a number: ";
    cin>> number;

    while (number % 2 == 0 && number > 1) {
        number /= 2;

    }

    cout << "The number is " << (number > 1? " " : "not ") << "a power of two";

    /*if (number > 1) {
        cout << "The number is not power of two" << endl;
    }
    else {
        cout << "The number is power of two" << endl;
    }*/

    return 0;
}