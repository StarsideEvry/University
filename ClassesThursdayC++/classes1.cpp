#include <iostream>
#include <string>

void encode(char * inputMessage, char * codedMessage)
{
    char* ptr = inputMessage;
    
    int i = 0;
    
    while(*ptr != '\0')
    {
        if ((*ptr >= 'A' && *ptr <= 'V')
            || (*ptr >= 'a' && *ptr) <= 'v')
            {
            codedMessage[i] = *ptr + 3;
        }
        else
        {
        }
        ptr++;
        i++;
    }
}

int main()
{
    char inputMessage[200];
    
    char codedMessage[200];
    
    std::cout << "Enter the message : ";
    
    std::cin.getline(inputMessage, 199);

    for (int i = 0; i < 199; i++) 
    {
        std::cout << inputMessage[i];
        
        if ((inputMessage[i] >= 'A' && inputMessage[i] <= 'V'
            || inputMessage[i] >= 'a' && inputMessage[i] <= 'v')) 
            {
            codedMessage[i] = inputMessage[i] + 3;
        }
        else if((inputMessage[i] >= 'w' && inputMessage[i] <='Z'
            || inputMessage[i] >= 'w' && inputMessage[i] <='z')) 
            {
                codedMessage[i] = inputMessage[i] - 23;
        }
        else 
        {
            codedMessage[i] = inputMessage[i];
        }
    }

    std::cout << std::endl;

    for (int i = 0; i < 199; i++) 
    {
        std::cout << codedMessage[i];
    }

    return 0;
}