#include <iostream>
#include <vector>

int main() {
    std::vector<int> set1 = {5, 2, 3, 8, 1, 6, 4, 12, 9, 7};

    int min_element = set1.front();  
    int max_element = set1.back();   

    int sum = 0;
    for (const int& element : set1) {
        if (element >= min_element && element <= max_element) {
            sum += element;
        }
    }
    std::cout << "The total sum is: " << sum << std::endl;

    return 0;
}