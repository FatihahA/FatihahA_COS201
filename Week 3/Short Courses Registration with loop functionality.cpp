#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    bool continueReg = true;

    while (continueReg){
    // Collect User Name
    string name;
    cout<<"Enter your full name:";
    cin>>name;

    // Is the user a PAU student
    bool PAUStudent;
    cout<<"Are you a PAU student? (1 for True, 0 for False):";
    int flag;
    cin>>flag;
    PAUStudent = (flag != 0);

    // Display Courses and collect course choice
    cout<<"Pick a course to register for:"<<endl;
    cout<<"1. Photography"<<endl;
    cout<<"2. Painting"<<endl;
    cout<<"3. Fish Farming"<<endl;
    cout<<"4. Baking"<<endl;
    cout<<"5. Public Speaking"<<endl;

    int course;
    cin>>course;

    // Display Locations and collect location choice
    cout<<"Pick a Location you would like to accommodate in: "<<endl;
    cout<<"1.Camp House A"<<endl;
    cout<<"2.Camp House B"<<endl;
    cout<<"3.Camp House C"<<endl;
    cout<<"4.Camp House D"<<endl;
    cout<<"5.Camp House E"<<endl;

    int location;
    cin>>location;

    // Initialize variables
    string courseChoice;
    double courseFee;
    int courseDuration;
    string locationChoice;
    double locationFee; //per day

    // Determine course details
    if (course == 1){
        courseChoice = "Photography";
        courseFee = 10000;
        courseDuration = 3;
    }
    else if (course == 2){
        courseChoice = "Painting";
        courseFee = 8000;
        courseDuration = 5;
    }
    else if (course == 3){
        courseChoice = "Fish Farming";
        courseFee = 15000;
        courseDuration = 7;
    }
    else if (course == 4){
        courseChoice = "Baking";
        courseFee = 13000;
        courseDuration = 5;
    }
    else if (course == 5){
        courseChoice = "Public Speaking";
        courseFee = 5000;
        courseDuration = 2;
    }
    else {
        cout<<"Invalid Course Choice"<<endl;
        return 0;
    }

    // Determine location details
    if (location == 1){
        locationChoice = "Camp House A";
        locationFee = 10000;
    }
    else if (location == 2){
        locationChoice = "Camp House B";
        locationFee = 2500;
    }
    else if (location == 3){
        locationChoice = "Camp House C";
        locationFee = 5000;
    }
    else if (location == 4){
        locationChoice = "Camp House D";
        locationFee = 13000;
    }
    else if (location == 5){
        locationChoice = "Camp House E";
        locationFee = 5000;
    }
    else {
        cout<<"Invalid Location Choice"<<endl;
        return 0;
    }

    // Calculate total fees
    double TotalLocationFee = locationFee * courseDuration;
    double TotalFee = courseFee + TotalLocationFee;

    //Applying discounts
    if (PAUStudent && (location == 2 || location == 3)){
        double DiscountedLocationFee = TotalLocationFee * 0.05;
        TotalLocationFee -= DiscountedLocationFee;
    }

    if ((courseDuration >5)||(courseFee>12000)){
        double DiscountedCourseFee = courseFee * 0.03;
        courseFee -= DiscountedCourseFee;
    }

    // Random Promo
    srand(time(0));
    int promovalidity = (rand() % 100) + 1; // Random number between 1 and 100
    if (promovalidity == 7 || promovalidity == 77){
        double PromoDiscount = TotalFee - 500;
        cout<<"Congratulations! You have received a promotional discount of 500."<<endl;
    }

    // Output Information
    cout<<"Registration Summary for "<<name<<":"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"PAU Student: "<<(PAUStudent ? "Yes" : "No")<<endl;
    cout<<"Course Choice: "<<courseChoice<<endl;
}

bool regValue;
cout<<"Do you want to register another student? (1 for Yes, 0 for No): ";
cin>>regValue;
if (regValue == 0){
    continueReg = false;
}
}