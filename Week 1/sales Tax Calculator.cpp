#include <iostream>
using namespace std;
#define Tax_rate 0.06

int main(){
    cout << "Welcome to the Sales Tax Calculator!" << endl;
    double Total_Purchase_Amount;
    cout << "Please enter the total purchase amount: ";
    cin >> Total_Purchase_Amount;
    double Sales_Tax = Total_Purchase_Amount * Tax_rate;
    cout << "The sales tax for your purchase is: " << Sales_Tax << endl;

    return 0;
}