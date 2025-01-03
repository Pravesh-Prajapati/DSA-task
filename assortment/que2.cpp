#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int array[rows][cols];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> array[i][j];
        }
    }

    int largest = array[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (array[i][j] > largest) {
                largest = array[i][j];
            }
        }
    }

    cout << "The largest element in the array is: " << largest << endl;

    return 0;
}
