#include <iostream>
using namespace std;

//Merge function
void merge(const int list1[], int size1,
           const int list2[], int size2,
           int list3[])
{
    int i = 0; 
    int j = 0; 
    int k = 0;

    while (i < size1 && j < size2) {
        if (list1[i] < list2[j]) {
            list3[k] = list1[i];
            i++;
        } else {
            list3[k] = list2[j];
            j++;
        }
        k++;
    }

    while (i < size1) {
        list3[k] = list1[i];
        i++;
        k++;
    }

    while (j < size2) {
        list3[k] = list2[j];
        j++;
        k++;
    }
}

int main() {
    //Sample case
    int list1[] = {2, 3, 8, 10};
    int list2[] = {1, 7, 9, 11, 13};

    int size1 = 4;
    int size2 = 5;

    int list3[9]; 

    merge(list1, size1, list2, size2, list3);

    cout << "Merged list: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << list3[i] << " ";
    }
    cout << endl;

    return 0;
}
