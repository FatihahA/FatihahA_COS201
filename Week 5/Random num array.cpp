#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generateRandomArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] = rand() % 20 + 1;
        
    }
}

int main(){
    srand(time(0));
    const int arraySize(20);
    int randNumbers[arraySize];

    generateRandomArray(randNumbers, arraySize);

    cout << "The random numbers generated are: " << endl;

    for (int i = 0; i < arraySize; i++) {
        cout << randNumbers[i] << " ";
    }
}