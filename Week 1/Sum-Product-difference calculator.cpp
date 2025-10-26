#include <iostream>
using namespace std;

int main(){
    //Collect Input
    int num1, num2;
    cout << "Enter first number and second number: ";
    cin >> num1 >> num2;

    //Perform Calculations
    int sum = num1 + num2;
    int product = num1 * num2; 
    int difference = num1 - num2;

    //Print Results
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl; 
    cout << "Difference: " << difference << endl;   

    return 0;
}