#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;

    cin >> input;
    
    if (input.length() != 10) {
        cout << "Invalid input data!";
        return 0;
    }
    
    int x1 = input[0] - '0';
    int x2 = input[1] - '0';
    int x3 = input[2] - '0';
    int x4 = input[3] - '0'; 
    int x5 = input[4] - '0';
    int x6 = input[5] - '0';
    int x7 = input[6] - '0';
    int x8 = input[7] - '0';
    int x9 = input[8] - '0';
    int x10 = input[9] - '0';

    int month = x3 * 10 + x4;
    int day = x5 * 10 + x6;
    if ((month <= 12 && month >=1) || (month <= 32 && month >=21) || (month <= 52 && month >=41)) {
        month = month % 20; 
        switch (month) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if (day >31 || day < 1) {
                    cout << "0" << endl;
                    return 0;
                }
            case 4:
            case 6:
            case 9:
            case 11:
                if (day >30 || day < 1) {
                    cout << "0" << endl;
                    return 0;
                }
            case 2:
                if (day >28 || day < 1) {
                    cout << "0" << endl;
                    return 0;
                }
        }     
    }
    else {
    cout << "0" << endl;
    return 0;
    }

    int x11 = (2 * x1 + 4 * x2 + 8 * x3 + 5 * x4 + 10 * x5
    + 9 * x6 + 7 * x7 + 3 * x8 +6 * x9) % 11;
    
    if (x11 == 10) {
        x11 = 0;
    }

    if (x10 == x11) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}
