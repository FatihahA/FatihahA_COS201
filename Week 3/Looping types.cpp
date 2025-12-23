#include <iostream>
using namespace std;

int main(){
    int num = 1;

    //While loop to print numbers from 1 to 100
    cout<<"Numbers from 1 to 100 using while loop: "<<endl;
    while (num <= 100){
        cout<<num<<endl;
        num++;
    }
    
    cout<<endl; 

    //Do-while loop to print numbers from 1 to 100
    num = 1;
    cout<<"Numbers from 1 to 100 using do-while loop: "<<endl;
    do{
        cout<<num<<endl;
        num++;
    }
    while(num<= 100);

    cout<<endl;
    
    //For loop to print numbers from 1 to 100
    cout<<"Numbers from 1 to 100 using for loop: "<<endl;
    for(num = 1; num <= 100; num++){
        cout<<num<<endl;
    }

    return 0;
}