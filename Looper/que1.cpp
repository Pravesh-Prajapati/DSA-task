#include<iostream>
using namespace std;


// ==================================================================que-1

int main() {
    char letter = 'a'; 
    do {
        cout << letter;
        letter = letter+4;         
    } while (letter <= 'z');  
    return 0;
}


// =====================================================================que-2

// int main() {
//     int num; 
//     int count=0;
//     cout << "Enter Any Number";
//     cin >> num;

//     if (num < 0) {
//         num = -num;
//     }
//     for (int temp = num; temp > 0; temp /= 10) {
//         count++;
//     }
//     if (num == 0) {
//         count = 1;
//     }

//     cout << "Total digits: " << count << endl;
//     return 0;
// }


// =====================================================================que3


// int main() {
//     int num, firstdigit, lastdigit;

//     cout << "Enter any number: ";
//     cin >> num;

//     if (num < 0) {
//         num = -num;
//     }

//     lastdigit = num % 10;

//     while (num >= 10) {
//         num /= 10;
//     }

//     firstdigit = num;

//     int sum = firstdigit + lastdigit;

//     cout << "Sum of the first and last digits: " << sum << endl;

//     return 0;
// }
