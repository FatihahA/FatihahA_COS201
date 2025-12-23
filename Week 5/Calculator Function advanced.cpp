#include <iostream>
using namespace std;

double addition(double a, double b) {
    return a + b;
}

double subtraction(double a, double b) {
    return a - b;
}

double multiplication(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    if (b == 0) {
        cout << "Error; Cannot divide by zero!" << endl;
        return 0;
    }
    return a / b;
}

double modulus(double a, double b){
    if (b == 0) {
        cout << "Error; Cannot perform modulus by zero!" << endl;
        return 0;
    }
    return static_cast<int>(a) % static_cast<int>(b);
}

int main(){
    double num1, num2;

    cout<<"Welcome to the '2 number calculator' program"<<endl;
    cout<<"Please enter the first number: ";
    cin>>num1;
    cout<<"Please enter the second number: ";
    cin>>num2;

    bool perfomOperation = true;

    while(perfomOperation){
    int choice;
    cout<<"What operation would you like to perform? (Pick the corresponding number)"<<endl;
    cout<<"1. Addition (+)"<<endl;
    cout<<"2. Subtraction (-)"<<endl;
    cout<<"3. Multiplication (*)"<<endl;
    cout<<"4. Division (/)"<<endl;
    cout<<"5. Modulus (%)"<<endl;
    cin>>choice;

    cout<<endl;
    
    switch(choice){
        case 1:
            cout<<"The sum of "<<num1<<" and "<<num2<<" is: "<<addition(num1, num2)<<endl;
            break;
        case 2:
            cout<<"The difference of "<<num1<<" and "<<num2<<" is: "<<subtraction(num1, num2)<<endl;
            break;          
        case 3:
            cout<<"The product of "<<num1<<" and "<<num2<<" is: "<<multiplication(num1, num2)<<endl;
            break;  
        case 4:
            cout<<"The division of "<<num1<<" and "<<num2<<" is: "<<division(num1, num2)<<endl;
            break;
        case 5:
            cout<<"The modulus of "<<num1<<" and "<<num2<<" is: "<<modulus(num1, num2)<<endl;
            break;
        default:
            cout<<"Invalid choice. Please select a valid operation/number."<<endl;
    }
    bool anotherOperation;
    cout<<"Would you like to perform another operation? (1 for Yes, 0 for No): ";
    cin>>anotherOperation;
    if (anotherOperation == 0){
        perfomOperation = false;
    }
    if(anotherOperation != 0 && anotherOperation != 1){
        cout<<"Invalid choice. Exiting the calculator."<<endl;
        perfomOperation = false;
}
}