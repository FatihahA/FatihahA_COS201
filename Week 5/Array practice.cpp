#include <iostream>
using namespace std;

    void readArray(int list[], int size){
    for(int i = 0; i<=size-1; i++){
        cin>>list[i];
    }
}

int main(){

    int size1;
    int arr1[50];
    cout<<"Enter a size for the array: ";
    cin>>size1;
    cout<<"list the members of the array";
    readArray(arr1,size1);

  
    /*int size = 5;
    int arr[size] = {1,3,4,5,6}; 

        int sum = arr[3] + arr[4];
    cout<<sum<<"\n";

        for(int i = 0; i<=size-1; i++){
        cout<<arr[i]<<"\n";
        sum += arr[i];
        cout<<sum<<"\n";
    }*/

    //Transversing means going through all the elements in the array
   /* int array1[] {1,3,4,5,6}
    int array1[] = {1,3,4,5,6}
    int array1[5] {1,3,4,5,6}
    int array1[5] = {1,3,4,5,6}*/

}