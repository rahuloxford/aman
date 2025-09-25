#include <iostream>
using namespace std;

int main() {
    // conditional statement in C++

    // syntax of if statement
    // int a = 8;
    // if (a > 5) {
    //     cout << "a is greater than 5" << endl;
    // }

    // syntax of if-else statement
    // int a = 7;
    // if (a > 5) {
    //     cout << "a is greater than 5" << endl;
    // } else {
    //     cout << "a is not greater than 5" << endl;
    // }

    // Question: Check whether a number is even or odd
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is even" << endl;
    } else {
        cout << num << " is odd" << endl;
    }

    // Question: Discount based on the price of a product
    float price;
    cout << "Enter the price of the product: ";
    cin >> price;

    if (price >= 1000) {
        cout << "You get a 10% discount!" << endl;
        float discount = price * 0.10;
        cout << "Discount amount: " << discount << endl;
        cout << "Price after discount: " << price - discount << endl;
    } else {
        cout << "No discount available." << endl;
        cout << "Total price: " << price << endl;
        cout << "Please pay the total amount." << endl;
    }

    return 0;
}