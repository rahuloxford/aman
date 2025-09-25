#include <iostream>
using namespace std;

int main() {
    // assignment operators
    int x = 10; // assignment
    cout << "x = " << x << endl;

    x += 5; // x = x + 5
    cout << "x += 5 -> x = " << x << endl;

    x -= 3; // x = x - 3
    cout << "x -= 3 -> x = " << x << endl;

    x *= 2; // x = x * 2
    cout << "x *= 2 -> x = " << x << endl;

    x /= 4; // x = x / 4
    cout << "x /= 4 -> x = " << x << endl;

    x %= 3; // x = x % 3
    cout << "x %= 3 -> x = " << x << endl;

    // increment and decrement operators
    int y = 5;
    cout << "y = " << y << endl;
    cout << "++y = " << ++y << " (pre-increment)" << endl; // y = y + 1
    cout << "y++ = " << y++ << " (post-increment)" << endl; // use y, then y = y + 1
    cout << "y after post-increment = " << y << endl;
    cout << "--y = " << --y << " (pre-decrement)" << endl; // y = y - 1
    cout << "y-- = " << y-- << " (post-decrement)" << endl; // use y, then y = y - 1
    cout << "y after post-decrement = " << y << endl;

    return 0;
}