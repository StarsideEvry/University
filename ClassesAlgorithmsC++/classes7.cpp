#include <iostream>

int main() {

    const int LEN = 10;

    int array[LEN] = {5, 78, 6, 42, -3, 6, -12, -73, 98, 10};

    int j = 0;

    int checks = 0;
    
    bool inversion = true;

    while (inversion)
    {
        inversion = false;
        
        for (int i = 0; i < LEN - j - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array [i + 1] = temp;
                inversion = true;
            }
            
        }
        j++;
    }

    std::cout << checks << std::endl;

    for (int j : array)

    std::cout << j << ' ';
        
    //system("pause");
    
    return 0;
}