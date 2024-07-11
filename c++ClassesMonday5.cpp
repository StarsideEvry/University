#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

int main () {
    std::string wordsData[99] = {};
    int wordsSize1;
    std::cout << "Enter the number of words to be used " << std::endl;
    std::cin >> wordsSize1;
    //std::string *wordsBaseData = wordsSize1;
    for (int i = 0; i < wordsSize1; i++)
    {
        std::cout << "Type a single word" << std::endl;
        std::cin >> wordsData[99];
    }
    for (int j = 0; j < 5 ; j++)
    {
      std::string randomWordPicker = wordsData[rand() %wordsSize1];
      std::cout << randomWordPicker << std::endl;
    }
    
    //std::string randomWordPicker = wordsData[rand() %wordsSize1];



    return 0;
}