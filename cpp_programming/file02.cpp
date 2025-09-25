#include <iostream>
using namespace std;

int main() {
    
    int number = 10; // memory size 4 bytes
    cout << "The number is: " << number << endl;
    const float pi = 3.14; // memory size 4 bytes
    // pi = 5.5; // This will cause a compilation error
    cout << "Value of pi: " << pi << endl;

    double largeNumber = 123456789.123456; // memory size 8 bytes
    cout << "Large number: " << largeNumber << endl;

    long long veryLargeNumber = 123456789012345; // memory size 8 bytes
    cout << "Very large number: " << veryLargeNumber << endl;

    char grade = 'A'; // memory size 1 byte
    cout << "Grade: " << grade << endl;

    bool isPassed = false; // memory size 1 byte
    cout << "Passed: " << isPassed << endl;

    string name = "Aman Malik"; // memory size depends on the string length
    cout << "Name: " << name << endl;

    return 0;
}