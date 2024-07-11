#include <iostream>
#include <string>

void screamingKid (int seatsInBus[], int size);

int main() {

    int rowsBus;
    
    std::cin >> rowsBus;
    
    int columsBus;
    
    std::cin >> columsBus;

    int** seatsInBus = new int*[rowsBus];

    for (int i = 0; i < rowsBus; i++)
    {
        seatsInBus[i] = new int[columsBus]; 
    }
    
    for (int rows = 0; rows < rowsBus; rows++)
    {
        for (int colums = 0; colums < columsBus; colums++)
        {
            std::cin >> seatsInBus[rows][colums];
        }

    }
    
    for (int rows = 0; rows < rowsBus; rows++)
    {
        delete[] seatsInBus[rows];
    }
    
    delete[] seatsInBus;

    return 0;
}

void screamingKid(int seatsInBus[], int rows, int colums)
{
    int temp = seatsInBus[0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < (colums - 2); j++)
        {
            seatsInBus[j] = seatsInBus[j-2];
        }
        
        seatsInBus[i] = seatsInBus[i];
    }
    seatsInBus[rows] = temp;
    
    seatsInBus[colums - 2] = temp;
}