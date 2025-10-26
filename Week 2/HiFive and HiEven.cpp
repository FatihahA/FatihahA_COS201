#include <iostream>
using namespace std;

int main(){
    cout<<"Please input an integer ";
    int integer;
    cin>>integer;

    if (integer%5 == 0){
        cout<<"HiFive";
    }
    else if(integer%2 == 0){
        cout<<"HiEven";
    }
    else{
        return 0;
    }

}  