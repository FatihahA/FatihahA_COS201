#include <iostream>
#include <string>
using namespace std;

int main() {
    int noOfItems;
    cout << "Enter the number of items: ";
    cin >> noOfItems;

    string itemName, cheapestItem;
    double price, lowestPrice;

    cout << "Enter name of item 1: ";
    cin >> itemName;
    cout << "Enter price of item 1: ";
    cin >> price;

    cheapestItem = itemName;
    lowestPrice = price;

    for (int i = 2; i <= noOfItems; i++) {
        cout << "Enter name of item " << i << ": ";
        cin >> itemName;
        cout << "Enter price of item " << i << ": ";
        cin >> price;

        if (price < lowestPrice) {
            lowestPrice = price;
            cheapestItem = itemName;
        }
    }

    cout << endl;

    cout << "Item with the lowest price: " << endl;
    cout << "Name: " << cheapestItem << endl;
    cout << "Price: " << lowestPrice << endl;

    return 0;
}