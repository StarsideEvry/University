#include <iostream>
#include <vector>

void lastKPrimeSymbols(const std::vector<char>& universalSet, const std::vector<int>& subsetA, int k) {
    std::vector<char> capitalSymbolsA;
    for (int i = universalSet.size() - 1; i >= 0 && capitalSymbolsA.size() < k; --i) {
        if (subsetA[i] == 1 && isupper(universalSet[i])) {
            capitalSymbolsA.push_back(universalSet[i]);
        }
    }

    if (capitalSymbolsA.size() == k) {
        std::cout << "The last " << k << " capital symbols in A are: ";
        for (int i = capitalSymbolsA.size() - 1; i >= 0; --i) {
            std::cout << capitalSymbolsA[i];
        }
        std::cout << std::endl;
    } else {
        std::cout << "Not enough capital symbols in A." << std::endl;
    }
}

int main() {
    int k = 3;
    std::vector<char> universalSet = {'e', 'r', 'D', 'U', 'w', 'm', 'B', 'x', 'N', 'z'};
    std::vector<int> subsetA = {1, 0, 1, 1, 1, 0, 1, 0, 1, 1};

    lastKPrimeSymbols(universalSet, subsetA, k);

    return 0;
}
