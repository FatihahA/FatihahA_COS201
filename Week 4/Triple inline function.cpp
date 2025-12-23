#include <iostream>
using namespace std;

// Inline function that returns triple of a number
inline int triple(int num) {
    return 3 * num;
}

int main() {
    cout << "The triple of 4 = " << triple(4) << endl;
    cout << "The triple of 7 = " << triple(7) << endl;
    cout << "The triple of -2 = " << triple(-2) << endl;

    return 0;
}