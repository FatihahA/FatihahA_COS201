#include <iostream>
using namespace std;

int main(){
    cout<<"Interest Calculation Program"<<endl;
    cout<<"Enter your starting balance: "<<endl;
    double starting_balance, annual_interest_rate;
    cin>>starting_balance;
    cout<<"Enter the annual interest rate (in percentage): "<<endl;
    cin>>annual_interest_rate;

    double interest = starting_balance * (annual_interest_rate / 100);
    double annual_balance = starting_balance + interest;

    //Question 5
    cout<<"Your balance after one year will be: "<<annual_balance<<endl;

    //Question 6
    double biennial_balance = annual_balance + (annual_balance * (annual_interest_rate / 100));
    cout<<"Your balance after two years will be: "<<biennial_balance<<endl;

    return 0;
}