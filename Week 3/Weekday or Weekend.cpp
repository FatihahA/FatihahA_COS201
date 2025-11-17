#include <iostream>
using namespace std;

int main(){
    int day;

    cout<<"Enter the day ===> ";
    cin>>day;

    if (day == 1){
        cout<<"Weekday \n";  
    }
    else if (day == 2){
        cout<<"Weekday \n";
    }
    else if (day == 3){
        cout<<"Weekday \n";
    }
    else if (day == 4){
        cout<<"Weekday \n";
    }
    else if (day == 5){
        cout<<"Weekday \n";
    }
    else if (day == 0){
        cout<<"Weekend \n";
    }
    else if (day == 6){
        cout<<"Weekend \n";
    }
    else{
        cout<<"Not a day \n";
    }

    return 0;
}