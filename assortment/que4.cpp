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

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    int rowToSum, colToSum;
    cout << "Enter the row (0 to " << rows - 1 << ") to calculate the sum: ";
    cin >> rowToSum;
    cout << "Enter the column (0 to " << cols - 1 << ") to calculate the sum: ";
    cin >> colToSum;

    if (rowToSum < 0 || rowToSum >= rows || colToSum < 0 || colToSum >= cols) {
        cout << "Invalid row or column index!" << endl;
        return 1;
    }

    int rowSum = 0;
    for (int j = 0; j < cols; j++) {
        rowSum += array[rowToSum][j];
    }

    int colSum = 0;
    for (int i = 0; i < rows; i++) {
        colSum += array[i][colToSum];
    }

    cout << "The sum of elements in row " << rowToSum << " is: " << rowSum << endl;
    cout << "The sum of elements in column " << colToSum << " is: " << colSum << endl;

    return 0;
}
