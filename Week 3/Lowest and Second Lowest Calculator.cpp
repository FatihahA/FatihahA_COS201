#include <iostream>
#include <string>
using namespace std;

int main() {
    int noOfItems;
    cout << "Enter number of items: ";
    cin >> noOfItems;

    string name;
    double price;

    string lowestName, secondLowestName;
    double lowestPrice, secondLowestPrice;

    cout << "Enter name of item 1: ";
    cin >> name;
    cout << "Enter price of item 1: ";
    cin >> price;

    lowestName = name;
    lowestPrice = price;

    cout << "Enter name of item 2: ";
    cin >> name;
    cout << "Enter price of item 2: ";
    cin >> price;

    if (price < lowestPrice) {
        secondLowestPrice = lowestPrice;
        secondLowestName = lowestName;

        lowestPrice = price;
        lowestName = name;
    } else {
        secondLowestPrice = price;
        secondLowestName = name;
    }

    for (int i = 3; i <= noOfItems; i++) {
        cout << "Enter name of item " << i << ": ";
        cin >> name;
        cout << "Enter price of item " << i << ": ";
        cin >> price;

        if (price < lowestPrice) {
            secondLowestPrice = lowestPrice;
            secondLowestName = lowestName;

            lowestPrice = price;
            lowestName = name;
        }
        else if (price < secondLowestPrice) {
            secondLowestPrice = price;
            secondLowestName = name;
        }
    }

    cout << endl;

    cout << "Item with the lowest price: "<<endl;
    cout << "Name: " << lowestName << ", Price: " << lowestPrice << endl;

    cout << "Item with the second-lowest price: "<<endl;
    cout << "Name: " << secondLowestName << ", Price: " << secondLowestPrice << endl;

    return 0;
}