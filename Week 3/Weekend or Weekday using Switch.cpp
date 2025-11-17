#include <iostream>
using namespace std;

int main(){
    int day;

    cout<<"Enter the day ===> ";
    cin>>day;

    switch (day){
        case 1:
            cout<<"Weekday \n";
            break;
        case 2:
            cout<<"Weekday \n";
            break;
        case 3:
            cout<<"Weekday \n";
            break;
        case 4:
            cout<<"Weekday \n";
            break;
        case 5:
            cout<<"Weekday \n";
            break;
        case 0:
            cout<<"Weekend \n";
            break;
        case 6:
            cout<<"Weekend \n";
            break;
        default:
            cout<<"Not a day \n";
    }
}