#include <iostream>
using namespace std;

int add(int, int);
int subtract(int, int);
int multiply(int, int);
float divide(int, int);
int modulu(int, int);

int main() {
    char choice;
    do {
        cout << "\n=== Arithmetic Operations Menu ===" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulus" << endl;
        cout << "==================================" << endl;

        int option, num1, num2;
        cout << "Enter your choice (1-5): ";
        cin >> option;

        if (option >= 1 && option <= 5) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch (option) {
            case 1:
                cout << "Result (Addition): " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Result (Subtraction): " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Result (Multiplication): " << multiply(num1, num2) << endl;
                break;
            case 4:
                if (num2 != 0)
                    cout << "Result (Division): " << divide(num1, num2) << endl;
                else
                    cout << "Error: Division by zero is not allowed." << endl;
                break;
            case 5:
                cout << "Result (Modulus): " << modulu(num1, num2) << endl;
                break;
            default:
                cout << "Invalid choice! Please select between 1 and 5." << endl;
        }

        cout << "Do you want to perform another operation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program exited. Thank you!" << endl;
    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return static_cast<float>(a) / b;
}

int modulu(int a, int b) {
    return a % b;
}
