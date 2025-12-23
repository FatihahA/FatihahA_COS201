#include <iostream>
#include <cmath>
using namespace std;

double f(int n) {
    double sum = 0;

    for (int i = 1; i <= n; i++) {
        sum = sum + 1.0 / (i * i);
    }

    return sqrt(6 * sum);
}

int main() {
    cout << "n    f(n)" << endl;
    cout << "------------" << endl;

    for (int n = 1; n <= 5; n++) {
        cout << n << "    " << f(n) << endl;
    }

    return 0;
}