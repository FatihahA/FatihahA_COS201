//File handling in C++

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // ofstream ==> Write to a file (output)
    // ifstream ==> Read from a file (input)
    // fstream ==> Read and write

    ofstream outfile("data.txt"); //You can specify location 'data.txt' is saved
                                  //If you don't specify a location the default location is the location of the source code

    if(!outfile){
        cout<<"Error Opening file or something";
        return 0;
    }

    outfile<<"Welcome to C++\n"
             "This is file handling class\n";

    outfile.close();
    cout<<"Data written to file\n";
}