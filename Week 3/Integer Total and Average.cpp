#include <iostream>
using namespace std;

int main() {
    int n;
    int positiveNumbers = 0;
    int negativeNumbers = 0;
    long long sum = 0;
    int count = 0;

    cout << "Enter integers (enter 0 to end  the program): ";
    while (cin >> n && n != 0){
        if (n > 0) ++positiveNumbers;
        else ++negativeNumbers;
        sum += n;
        ++count;
    }

    if (count == 0) {
        cout << "No numbers entered except 0\n";
    } else {
        double average = static_cast<double>(sum) / count;
        cout << "Number of positives: " << positiveNumbers << '\n';
        cout << "Number of negatives: " << negativeNumbers << '\n';
        cout << "Total: " << sum << '\n';
        cout << "Average: " << average << '\n';
    }
    return 0;
}