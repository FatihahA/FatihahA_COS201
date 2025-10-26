#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int num1 = rand()%10;
    int num2 = rand()%10;

    int temp;
    if(num1 < num2){
    temp = num1;
    num1 = num2;
    num2 = temp;
    }
   
    int difference = num1 - num2;

    int users_difference;
    cout<<"Pick two numbers between 0 and 9 and enter their difference"<<endl;
    cin>>users_difference;

    if(difference==users_difference){
        cout<<"Correct the difference is "<<difference;
    }
    else{
        cout<<"Wrong the difference is "<<difference;
    }

    return 0;
}