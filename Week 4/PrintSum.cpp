#include <iostream>
using namespace std;

void printSum(int a, int b) {
    cout << "Sum = " << (a + b) << endl;
}

int main() {
    // Calling with different pairs
    printSum(5, 10);
    printSum(-3, 7);

    return 0;
}