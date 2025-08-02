#include <stdio.h>

int main() {

    // constants? - read only variable.

    int number = 145;
    printf("%d\n", number);

    number = 496; // variable can be modify
    printf("%d\n", number);


    // constants can't be changed
    const float pi = 3.1415;
    // pi = 3.5; //error: assignment of read-only variable 'pi'
    printf("%f", pi);

    return 0;
}