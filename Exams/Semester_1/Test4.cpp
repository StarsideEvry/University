#include <iostream>
# include <ctime>
using namespace std;

int coin()
{
	int flip;
	flip=  rand() % 2 + 1;
				if (flip == 1)
				cout << "Coin " << "Heads" << endl;
				else
				cout << "Coin " << "Tails" << endl;
	return (flip);
}

int main ()
{
    int coinFlips;
    cout << "Times to flip the Coin: ";
    cin >> coinFlips;
	int times; 
	int side;
	int heads = 0;
	int tails = 0;
    srand(static_cast<int>(time(0))); 
	for (int times=1; times <= coinFlips; times++)
     {
        side = coin();
		if (side == 1) 
            heads++;
         else
            tails++;
     }
     
}