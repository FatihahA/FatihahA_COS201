#include <iostream>
using namespace std;

int main(){
    int birthYear;
    cout<< "To find your Year-Based Chinese Zodiac Sign, Enter the year you were born: ";
    cin>> birthYear;

    switch (birthYear % 12) {
        case 0:
            cout<< "Your Zodiac sign is Monkey";
            break;
        case 1:
            cout<< "Your Zodiac sign is Rooster";
            break;
        case 2:
            cout<< "Your Zodiac sign is Dog";
            break;
        case 3:
            cout<< "Your Zodiac sign is Pig";
            break;
        case 4:
            cout<< "Your Zodiac sign is Rat";
            break;
        case 5:
            cout<< "Your Zodiac sign is Ox";
            break;
        case 6:
            cout<< "Your Zodiac sign is Tiger";
            break;
        case 7:
            cout<< "Your Zodiac sign is Rabbit";
            break;
        case 8:
            cout<< "Your Zodiac sign is Dragon";
            break;
        case 9:
            cout<< "Your Zodiac sign is Snake";
            break;
        case 10:
            cout<< "Your Zodiac sign is Horse";
            break;
        case 11:
            cout<< "Your Zodiac sign is Sheep";
            break;
    }
        return 0;
}