#include <iostream>
using namespace std;

int main(){
    cout<<"Please Enter your age: ";
    int age;
    cin>>age;

    if(age>=18){
        cout<<"You are an adult!";
    }
    else{
        cout<<"You are NOT an adult!";
    }
    return 0;
}