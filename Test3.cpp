#include <iostream>
#include <vector>
#include <algorithm>

char findLastElement(const std::vector<char>& charArray) {
    std::vector<char> sortedArray = charArray;
    std::sort(sortedArray.begin(), sortedArray.end());
    return sortedArray.back();
}

std::string encodeString(const std::string& inputString, char lastElement) {
    std::string encodedString = inputString;

    for (char& ch : encodedString) {
        if (isalpha(ch)) {
            char baseChar = islower(ch) ? 'a' : 'A';
            ch = (ch - baseChar + lastElement - 'a') % 26 + baseChar;
        }
    }

    return encodedString;
}

int main() {
    std::vector<char> charArray = {'e', 's', 'i', 'g'};
    std::string inputString = "Coding is an art!";

    char lastElement = findLastElement(charArray);

    std::string encodedString = encodeString(inputString, lastElement);

    std::cout << "Encoded string: " << encodedString << std::endl;

    return 0;
}
