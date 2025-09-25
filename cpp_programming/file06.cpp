#include <iostream>
using namespace std;

int main() {
    // arithemetic operators
    int a = 10, b = 25;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "b / a = " << b / a << endl;
    cout << "b % a = " << b % a << endl;

    // relational operators / comparison operators
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    // logical operators
    // and (&&)
    // returns true if both the operands are true
    cout << "true && true: " << (true && true) << endl;
    cout << "true && false: " << (true && false) << endl;
    cout << "false && true: " << (false && true) << endl;
    cout << "false && false: " << (false && false) << endl;

    // or (||)
    // returns true if at least one of the operands is true
    cout << "true || true: " << (true || true) << endl;
    cout << "true || false: " << (true || false) << endl;
    cout << "false || true: " << (false || true) << endl;
    cout << "false || false: " << (false || false) << endl;

    // not (!)
    // returns true if the operand is false
    // returns false if the operand is true
    cout << "!true: " << (!true) << endl;
    cout << "!false: " << (!false) << endl;

    // real life example of logical operators
    int age = 20;
    bool hasVoterID = true;
    bool canVote = (age >= 18) && hasVoterID;

    cout << "Can vote: " << canVote << endl;

    // example of or operator
    bool hasPassport = true;
    bool hasDriverLicense = false;
    bool canTravel = hasPassport || hasDriverLicense;
    cout << "Can travel: " << canTravel << endl;

    return 0;
}
