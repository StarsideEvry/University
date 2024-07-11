#include <iostream>

using namespace std;

struct City
{   
    string city;
    int population;
    string neighborhoods[100];
    string neighborhood;
    string address;
    string sizeSquare;
    int floor;
    int rooms;
    double price;
    bool elevator;
} myApart1, myApart2, myApart3, myApart4, myApart5;

/*struct Neighborhood
{
    string name;
    string sizeSquare;
    int population;
} myApart1, myApart2, myApart3, myApart4, myApart5;

struct Apartament
{
    double sizeSquare;
    int floor;
    int rooms;
    string address;
    double price;
    bool elevator;
    string neighborhood;
} myApart1, myApart2, myApart3, myApart4, myApart5;*/

int main () {

myApart1.address = "st. Narodno Horo 84";
myApart1.neighborhood = "Ovcha Kupel"; 
myApart1.city = "Sofia";
myApart1.sizeSquare = "80m2"; 
myApart1.floor = 2 ; 
myApart1.rooms = 3 ; 
myApart1.price = 250000;
myApart1.elevator = false;

myApart2.address = "st. Golemo Malko 23";
myApart2.neighborhood = "Manastirski livadi"; 
myApart2.city = "Sofia";
myApart2.sizeSquare = "90m2"; 
myApart2.floor = 11 ; 
myApart2.rooms = 3 ; 
myApart2.price = 600000;
myApart2.elevator = true;

myApart3.address = "st. Paco Rabana 3, Kapana";
myApart3.neighborhood = "Kapana"; 
myApart3.city = "Plovdiv";
myApart3.sizeSquare = "45m2"; 
myApart3.floor = 1 ; 
myApart3.rooms = 1 ; 
myApart3.price = 50000;
myApart3.elevator = false;

myApart4.address = "st. Strashen 5";
myApart4.neighborhood = "Center"; 
myApart4.city = "Plovdiv";
myApart4.sizeSquare = "30m2"; 
myApart4.floor = 2 ; 
myApart4.rooms = 1 ; 
myApart4.price = 75000;
myApart4.elevator = false;

myApart5.address = "st. White Holes";
myApart5.neighborhood = "Krasno Selo"; 
myApart5.city = "Sofia";
myApart5.sizeSquare = "150m2"; 
myApart5.floor = 2 ; 
myApart5.rooms = 4 ; 
myApart5.price = 1000000;
myApart5.elevator = true;

string wantedCity;
string wantedNeighborhood;
int wantedFloor;
int wantedRooms;
int budget;
int points = 5;

cin >> wantedCity;
cin >> wantedNeighborhood;
cin >> wantedFloor;
cin >> wantedRooms;
cin >> budget;

for (int i = 0; i < points ; i++)
{
    if (wantedFloor == myApart1.floor && wantedRooms == myApart1.rooms && budget == myApart1.price || wantedCity == myApart1.city || wantedNeighborhood == myApart1.neighborhood)
    {
        cout << "st. Narodno Horo 84, Ovcha Kupel, Sofia, 80m2, 2 floor, 3 rooms, 250 000 euro" << endl;
    } else if (wantedCity == myApart2.city || wantedNeighborhood == myApart2.neighborhood || wantedFloor == myApart2.floor && wantedRooms == myApart2.rooms && budget == myApart2.price)
    {
        cout << "st. Golemo Malko 23, Manastirski livadi, Sofia, 90m2, 11 floor, 3 rooms, 600 000 euro" << endl;
    } else if (wantedCity == myApart3.city || wantedNeighborhood == myApart3.neighborhood || wantedFloor == myApart3.floor && wantedRooms == myApart3.rooms && budget == myApart3.price)
    {
        cout << "st. Paco Rabana 3, Kapana, Plovdiv, 45m2, 1 floor, 1 room, 50 000 euro" << endl;
    } else if (wantedCity == myApart4.city || wantedNeighborhood == myApart4.neighborhood || wantedFloor == myApart4.floor && wantedRooms == myApart4.rooms && budget == myApart4.price)
    {
        cout << "st. Strashen 5, Center, Plovdiv, 30m2, 2 floor, 1 room, 75 000 euro" << endl;
    } else if (wantedCity == myApart5.city || wantedNeighborhood == myApart5.neighborhood || wantedFloor == myApart5.floor && wantedRooms == myApart5.rooms && budget == myApart5.price)
    {
        cout << "st. White Holes, Krasno Selo, Sofia, 150m2, 2 floor, 4 rooms, 1 000 000 euro" << endl;
    }
}
    return 0;
}