#include <stdio.h>

int y = 50; // global variable

int demo() {
    int x = 90; // local variable
    y = 10;
    printf("%d\n", y);
}

int main() {
    demo();
    printf("%d\n", y);

    return 0;
}