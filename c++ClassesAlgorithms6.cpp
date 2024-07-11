#include <iostream>
#include <algorithm>

void sortingAlg(int Array[], int n)
{
    int firstElement;

    int secondElement;

    int minimalIndex;

    for (int i = 0; i < n - 1; i++)
    {
        minimalIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (Array[j] < Array[minimalIndex])
                minimalIndex = j;
            
        }

        if (minimalIndex != i)
            std::swap(Array[minimalIndex], Array[i]);
        
    }
    
}

int main() {

    int Array[] = {3, 11, 2, 9, 1, 5};

    int n = sizeof(Array) / sizeof(Array[0]);

    int maximumNuber; //= *std::max_element(Array1, Array1 + n);

    int minimalNumber; //= *std::min_element(Array1, Array1 + n);

    return 0;
}