#include <stdio.h>

int main() {

    // Q. how to take input from the user?

    printf("enter a number please? ");

    // step 1: create a variable which will store the data
    int number;

    // step 2: take the data input from user and store inside variable
    scanf("%d", &number);


    // output
    printf("number x3 is %d\n", number * 3);


    // Q. take users marks input?

    printf("enter your marks? ");
    float marks;
    scanf("%f", &marks);

    printf("Student scored %.2f", marks);

}
