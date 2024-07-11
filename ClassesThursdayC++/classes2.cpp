#include <iostream>

int main()
{
    char isbn10[14];

    int cleanIsbn10[10];

    std::cout << "Enter isbn: ";

    std::cin.getline(isbn10, 13);
    
    int c = 0;
    
    for (int i = 0; i < 13; i++)
    {
        if (isbn10[i] != '-' ||isbn10[i] != 'X' )
    {   
        cleanIsbn10[c] = isbn10[i];
    }
    else if (isbn10[12] == 'X' ) 
    {
        cleanIsbn10[c] = 10;
    }
    c++;
    }
    
    return 0;
}