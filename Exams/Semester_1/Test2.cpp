#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
  srand((unsigned int) time(NULL));
  
  int roll = 0;
  int sides;
  cout << "Please enter number of sides: " << endl;
  cin >> sides;
  int dice;
  cout << "Please enter number of rolls: " << endl;
  cin >> dice;
    int i;
    int total = i + roll;
    int *array = new int[total];
  for (int i = 1; i <= dice; i++) {
    roll = (rand() % sides) + 1;
    
    cout << "Dice " << i << ": " << roll << endl;
  }
cout << total;
  return 0;
}
