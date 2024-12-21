#include <iostream>
using namespace std;
int main()
{
    int score;
    char grade;
    cout << "Enter your score between 1 to 100";
    cin >> score;
    grade = (score >= 90)   ? 'A'
            : (score >= 80) ? 'B'
            : (score >= 70) ? 'C'
            : (score >= 60) ? 'D'
                            : 'F';

    cout << "Your grade is:" << grade << endl;

    switch (grade)
    {
    case 'A':
        cout << "Excellent work!";
        break;
    case 'B':
        cout << "Well Done!";
        break;
    case 'C':
        cout << "Good Job!";
        break;
    case 'D':
        cout << "You Passed, but you could better";
        break;
    default:
        cout << "Sorry, you failed";
        break;
    }

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        cout << "You are eligible for next level!";
    }
    else
    {
        cout << "Please try again next time!!";
    }
    return 0;
}