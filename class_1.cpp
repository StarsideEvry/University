#include <iostream>
#include <string>
using namespace std;

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
        //else if {}
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
    cout << "Enter the message : ";
    cin.getline(inputMessage, 199);

    // [o][1]
    // +3

    for (int i = 0; i < 199; i++) 
    {
        cout << inputMessage[i];
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

    cout << endl;

    for (int i = 0; i < 199; i++) 
    {
        cout << codedMessage[i];
    }

    return 0;
}
