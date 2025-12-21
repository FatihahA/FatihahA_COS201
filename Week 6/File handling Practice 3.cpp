#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    // ios::out ==> write mode
    // ios::in ==> read mode
    // ios::app ==> append
    // ios::trunct** ==> Trunctuate, erase file before writing new content - formatting


    fstream file("data.txt", ios::out | ios::app);

    file<<"Adding a new line.\n";
    file.close();
    cout<<"Done.\n";

}