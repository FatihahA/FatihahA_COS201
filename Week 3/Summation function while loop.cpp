#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int sum = 0;

    while (i < 10){
        sum = sum + i;
        i++;
        cout<<"When i = "<<i<<endl;
        cout<<"The sum is: "<<sum<<endl; //Study difference between \n and endl
    }
    cout<<"The summation is: "<<sum<<endl;
    return 0;
}