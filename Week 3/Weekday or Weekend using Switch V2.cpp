#include <iostream>
using namespace std;

int main(){                       //Fallthrough Concept
    int day;

    cout<<"Enter the day ===> ";
    cin>>day;

    switch (day){
        case 1:
            
        case 2:
        
        case 3:
        
        case 4:
           
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