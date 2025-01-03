#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int array[n];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    bool foundNegative = false;
    cout << "The negative elements in the array are: ";
    for (int i = 0; i < n; i++) {
        if (array[i] < 0) {
            cout << array[i] << " ";
            foundNegative = true;
        }
    }

    if (!foundNegative) {
        cout << "None";
    }

    cout << endl;
    return 0;
}
