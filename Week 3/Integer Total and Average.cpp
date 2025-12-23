#include <iostream>
using namespace std;

int main() {
    int num;
    int positiveNumbers = 0;
    int negativeNumbers = 0;
    long long sum = 0;
    int count = 0;

    cout << "Enter integers (enter 0 to end  the program): ";
    while (cin >> num && num != 0){
        if (num > 0) ++positiveNumbers;
        else ++negativeNumbers;
        sum += num;
        ++count;
    }

    if (count == 0) {
        cout << "No numbers entered except 0 \n";
    } else {
        double average = sum / count;
        cout << "Number of positives: " << positiveNumbers << "\n";
        cout << "Number of negatives: " << negativeNumbers << "\n";
        cout << "Total: " << sum << "\n";
        cout << "Average: " << average << "\n";
    }
    return 0;
}