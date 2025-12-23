#include <iostream>
using namespace std;

int square(int num) {
    return num * num;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int result = square(num);

    cout << "The square of your number is= " << result << endl;

    return 0;
}