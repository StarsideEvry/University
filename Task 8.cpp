#include <iostream>
#include <string>

using namespace std;

char shiftChar (char c, int rshift) {
    char temp = tolower(c);
    int raw = ((int)temp - 97 + rshift);
    raw += 26;
    raw =  raw % 26;
    raw += 97;
    temp = (char)raw;

    if ((int)c >= 65 && (int)c <= 90) {
        temp = toupper(temp);
        return temp;
    }

    if ((int)c >= 97 && (int)c <= 122) { 
        return temp;
    } else {
        return c;
    }
}
string encryptCaesar(string plaintext, int rshift) {
    string output;
    for(int i=0; i < plaintext.length(); i++){
    output += shiftChar(plaintext[i], rshift);
    }
    return output;
}

int main() {
    string input = "";
    int shift;
    char dontEnc[5] = {'e', 't' ,'i' ,'s', 'p'};
    getline(cin, input); 
    
    cin >> shift;

    if (shift < 26 && shift >= 0) {

    } else {
        cout << "Invalid input data!";
        return 0;
    }

    cout << encryptCaesar(input, shift) << endl;
    return 0;
}