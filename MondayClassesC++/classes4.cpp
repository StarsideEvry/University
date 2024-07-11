#include <iostream>
#include <string>

int main(){

    std::string favoriteFoodMale[3];

    std::cout << "Please enter your three favorite foods: ";

    for (int favoriteFoodMale = 0; favoriteFoodMale < 3; i++)
    {
        getline (std::cin,favoriteFoodMale);
    }

    std::string favoriteFoodFemale[3];
    
    std::cout << "Please enter your SO three favorite foods: ";

    for (int favoriteFoodFemale = 0; favoriteFoodFemale < 3; i++)
    {
        getline (std::cin,favoriteFoodFemale);
    }

    int restaurantsCount;

    std::cin >> restaurantsCount;

    for (int restaurant = 0; restaurant < restaurantsCount; restaurantsCount++)
    {
        std::cin >> restaurant;
    }

    std::cout << restaurantsCount <<" has this many " << " matches for you and " << "these many matches for your SO." << std::endl;

    return 0;
}