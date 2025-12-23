#include <iostream>
using namespace std;

void readArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void printArray(int arr[], int size){
    cout << "The elements in the array are: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int size;
    cout<<"Assign a size to the array: ";
    cin>>size;

    int arr[100]; // Assuming a maximum size of 100 for simplicity

    readArray(arr, size);
    printArray(arr, size);

    return 0;
}