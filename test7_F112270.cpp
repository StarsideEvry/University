#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand((unsigned int) time(NULL));
  
  int roll = 0;
  int sides = 2;
  //cout << "Please enter number of sides: " << endl;
  //cin >> sides;
  int coinFlips;
  cout << "Please enter number of flips: " << endl;
  cin >> coinFlips;
  for (int i = 1; i <= coinFlips; i++) {
    roll = (rand() % sides) + 1;
    
    cout << "Coin  " << i << ": " << roll << endl;
  }

  return 0;
}