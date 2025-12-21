#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream infile("data.txt");

    if(!infile){
        cout<<"Cannot open file";
        return 0;
    }

    string line;

    while(getline(infile, line)){
        cout<<line<<endl;
    }

    infile.close();

}