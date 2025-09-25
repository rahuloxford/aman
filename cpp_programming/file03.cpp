#include <iostream>
using namespace std;

int main() {
    
    // how to take input from user

    string user_name;
    cout << "Enter your name: ";
    getline(cin, user_name); // taking string input from user

    int user_age;
    cout << "Enter your age: ";
    cin >> user_age; // taking input from user

    cout << "Hello, " << user_name << "! You are " << user_age << " years old." << endl;

    return 0;
}