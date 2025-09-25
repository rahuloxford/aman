#include <stdio.h>

int k = 110;

int demo() {
    k = 88;
    int i = 90;
    printf("%d\n", k);
    // printf("%d\n", j); // j is only available in main
}


int factorial(int n) {
    if (n > 0) {
        return n * factorial(n - 1);
    }

    return 1;
}

int main() {
    // int j = 80;
    // demo();
    // printf("%d\n", i); i is only available in demo
    // printf("%d\n", k);
    // temp();

    int result = factorial(5);
    printf("Factorial of 5 is: %d", result);

    return 0;
}