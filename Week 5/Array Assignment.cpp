#include <iostream>
using namespace std;

int findMinIndex(const int arr[], int size) {
    int minIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    return minIndex;
}

int findMaxIndex(const int arr[], int size) {
    int maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    return maxIndex;
}

int calculateSum(const int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

#include <iostream>
using namespace std;

int findMinIndex(const int arr[], int size);
int findMaxIndex(const int arr[], int size);
int calculateSum(const int arr[], int size);

int main() {
    int arr[] = {4, -2, 7, 1, 9};
    int size = 5;

    int minIndex = findMinIndex(arr, size);
    int maxIndex = findMaxIndex(arr, size);
    int sum = calculateSum(arr, size);

    cout << "The minimum/smallest element in the array is: " << arr[minIndex]<< " at index " << minIndex << endl;

    cout << "The maximum/biggest element in the array is: "<< arr[maxIndex]<< " at index " << maxIndex << endl;

    cout << "The sum of elements in the array is: " << sum << endl;

    return 0;
}