#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream infile("Score of students.txt");

    if(!infile){
        cout<<"File cannot be open.";
        return 0;
    }

    int number;
    int sum;

    while(infile >> number){
        cout<<number<<endl;
        sum = sum + number;
    }
    cout<<"The sum is  "<<sum;
    infile.close();
}