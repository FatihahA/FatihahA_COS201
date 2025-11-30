#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime> 
using namespace std;

bool isPrime(int num){
    if (num > 97)
        return false;

    if (num <= 1)
        return false;

    int i = 2;
    while (i * i <= num){      
        if (num % i == 0)
            return false;
        i++;
    }
    return true;
}

int main(){
string fullName;
int jambScore;
double waecAverage;
int age;
bool isFirstChoice;
bool isDisplinaryRecord;
int hostelPreference;
int mainHostel(180000), annexHostel(120000), dayStudent(0), baseTuition(1500000);

cout<<"Enter your full name: ";
getline(cin, fullName);

cout<<"Enter your JAMB score: ";
cin>>jambScore;
while (jambScore < 0 || jambScore > 400) {
    cout << "JAMB score must be between 0 and 400. Enter again: ";
    cin >> jambScore;
}

cout<<"Enter your average WAEC score: ";
cin>>waecAverage;
while (waecAverage < 0 || waecAverage > 100) {
    cout << "WAEC score must be between 0 and 100. Enter again: ";
    cin >> waecAverage;
}

cout<<"Enter your age: ";
cin>>age;
while (age <= 0) {
    cout << "Age must be a positive number. Enter again: ";
    cin >> age;
}

cout<<"Is your first choice PAU(1/0): ";
cin>>isFirstChoice;
while (isFirstChoice != 1 && isFirstChoice != 0) {
    cout << "Only 1 or 0 allowed. Enter again: ";
    cin >> isFirstChoice;
}

cout<<"Do you have a disciplinary record(1/0): ";
cin>>isDisplinaryRecord;
while (isDisplinaryRecord != 1 && isDisplinaryRecord != 0) {
    cout << "Only 1 or 0 allowed. Enter again: ";
    cin >> isDisplinaryRecord;
}

cout<<"What hostel would you like to reside in (1/2/3)? \n"
      "1. Main hostel -> 180,000 \n"
      "2. Annex hostel -> 120,000 \n"
      "3. Day student -> 0 \n";
cin>>hostelPreference;
while (hostelPreference != 1 && hostelPreference != 2 && hostelPreference != 3) {
    cout << "Invalid option! Please enter 1, 2, or 3: ";
    cin >> hostelPreference;
}

string admissionStatus;

if((isDisplinaryRecord == 1)||(age<15)){
    admissionStatus = "Rejected";
}
else if((jambScore>=220 && waecAverage>=60 && isFirstChoice == 1) || (jambScore>= 200 && waecAverage>=70)){
    admissionStatus = "Admitted";
}
else{
    admissionStatus = "Pending";
}

double tutionScholarship;

if(admissionStatus == "Admitted"){
    if(jambScore>=320){
        tutionScholarship = 0.3;
    }
    else if(jambScore>=280){
        tutionScholarship = 0.2;
    }
    else if(jambScore>=240){
        tutionScholarship = 0.1;
    }
    else{
        tutionScholarship = 0.0;
    }
}
if(waecAverage>=80 && isFirstChoice == 1){
    tutionScholarship+=0.05;
}

int hostelPrice;
string hostelName;

switch(hostelPreference){
    case 1:
        hostelName = "Main Hostel";
        hostelPrice = mainHostel;
        break;
    case 2:
        hostelName = "Annex Hostel";
        hostelPrice = annexHostel;
        break;
    case 3:
        hostelName = "Day Student";
        hostelPrice = dayStudent;
        break;
    default:
        cout<<"Invalid hostel preference."<<endl;
        return 0;
}

string verifiedHostel;
int hostelFee;

if(admissionStatus == "Admitted"){
    verifiedHostel = hostelName;
    hostelFee = hostelPrice;
}
else if(admissionStatus == "Pending"){
    verifiedHostel = "On hold";
    hostelFee = 0;
}
else if(admissionStatus == "Rejected"){
    verifiedHostel = "Not Applicable";
    hostelFee = 0;
}

srand(time(0));
int num = ((rand()%100)+1);

int grant;

if(isPrime(num)==1){
    grant = 50000;
}
else{
    grant = 0;
}

double tuitionAfterScholarship;
int totalPayable;

//Total fee calculation
tuitionAfterScholarship = baseTuition - (baseTuition * tutionScholarship);
totalPayable = tuitionAfterScholarship + hostelFee - grant;

//Output
cout<<"Name: "<<fullName<<endl;
cout<<"Admission Status: "<<admissionStatus<<endl;
cout<<"Tuition Scholarship: "<<tutionScholarship * 100<<"%"<<endl;
cout<<"Tuition after scholarship: "<<tuitionAfterScholarship<<endl;                                     
cout<<"Hostel: "<<verifiedHostel<<endl;
cout<<"Hostel fee: "<<hostelFee<<endl;
cout<<"Total Payable: "<<totalPayable<<endl;
cout<<"Random draw: "<<num<<endl;
cout<<"Grant Awarded: "<<grant<<endl;  

}