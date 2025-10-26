#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double side1, side2, hypotenuse;

    cout<<"Let's calculate the hypotenuse of your right-angled triangle"<<endl;
    cout<<"Enter the lenght of the first side: "<<endl;
    cin>>side1;
    cout<<"Enter the lenght of the second side: "<<endl;
    cin>>side2;

    hypotenuse = sqrt((side1 * side1) + (side2 * side2));
    cout<<"The length of the hypotenuse is: "<<hypotenuse<<endl;

    return 0;
}