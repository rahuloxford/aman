#include <iostream>
using namespace std;

int main() {
    
    // syntax: if, else if, else

    /*
        if (condition) {
            code
        } else if (condition) {
            code
        } else if (condition) {
            code
        } else if (condition) {
            code
        } else {
            code
        }
    */

    // Question: Check if a number is positive, negative or zero
    // int number;
    // cout << "Enter a number: ";
    // cin >> number;

    // if (number > 0) {
    //     cout << "The number is positive." << endl;
    // } else if (number < 0) {
    //     cout << "The number is negative." << endl;
    // } else {
    //     cout << "The number is zero." << endl;
    // }

    // Question: Check grade based on marks
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks > 100 || marks < 0) {
        cout << "Invalid marks!" << endl;
    } else if (marks >= 90) {
        cout << "Grade: A" << endl;
    } else if (marks >= 80) {
        cout << "Grade: B" << endl;
    } else if (marks >= 70) {
        cout << "Grade: C" << endl;
    } else if (marks >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }


    // suggest some more questions
    // 1. Check if a year is a leap year or not.
    // 2. Determine the largest of three numbers.
    // 3. Check if a character is a vowel or consonant.
    // 4. Determine if a number is even or odd.
    // 5. Calculate the discount based on the purchase amount.
    
    // more questions
    // 6. Check if a person is eligible to vote based on age.
    // 7. Determine the day of the week based on a number (1-7
    // 8. Check if a number is prime or not.
    // 9. Calculate the BMI and determine the weight category.
    // 10. Determine the season based on the month number.


    return 0;
}