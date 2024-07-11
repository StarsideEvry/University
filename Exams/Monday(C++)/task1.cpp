#include <iostream>

int main()
{

    int height;
    int width;
    int lenght;

    int volumeSpace;

    std::cin >> height;
    std::cin >> width;
    std::cin >> lenght;

    volumeSpace = height * width * lenght;

    int items;

    while (true)
    {
        std::cin >> items;

        if (items == -1)
        {
            break;
        }
        
        volumeSpace = volumeSpace - items;
        
        if (volumeSpace < 0)
        {
            std::cout << "No more space. You need " << volumeSpace * -1 << " space(s) more" << std::endl;
            return 0;
        }
    }

    std::cout << "Do I have space for my Audi A6? Space left: " << volumeSpace << std::endl;

    return 0;
}