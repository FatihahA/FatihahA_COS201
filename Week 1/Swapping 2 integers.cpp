#include <iostream>
using namespace std;

int main() {
    int num1, num2, temp;
    
    // Input two numbers
    cout << "Enter first number and second number: ";
    cin >> num1 >> num2;
    
    // Display numbers before swapping
    cout << "\nBefore swapping:" << endl;
    cout << "First number = " << num1 << endl;
    cout << "Second number = " << num2 << endl;
    
    // Swap numbers using temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    // Display numbers after swapping
    cout << "\nAfter swapping:" << endl;
    cout << "First number = " << num1 << endl;
    cout << "Second number = " << num2 << endl;
    
    return 0;
}