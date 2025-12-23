#include <iostream>
using namespace std;

int main(){
    int num = 1;

    //While loop to print Welcome to C++ 10 times
    cout<<"-Welcome to C++- 10 times using while loop: "<<endl;
    while (num <= 10){
        cout<<"Welcome to C++"<<endl;
        num++;
    }
    
    cout<<endl; 

    //Do-while loop to print Welcome to C++ 10 times
    num = 1;
    cout<<"-Welcome to C++- 10 times using do-while loop: "<<endl;
    do{
        cout<<"Welcome to C++"<<endl;
        num++;
    }
    while(num<= 10);

    cout<<endl;
    
    //For loop to print Welcome to C++ 10 times
    cout<<"-Welcome to C++- 10 times using for loop: "<<endl;
    for(num = 1; num <= 10; num++){
        cout<<"Welcome to C++"<<endl;
    }

    return 0;
}