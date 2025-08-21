#include <stdio.h>

int main() {

    int age = 34;
    // printf("%d\n", age);
    // printf("%p\n", &age);

    // pointer - a variable that stores the memory address
    // of another variable as it's own value.
    int *ptr = &age;
    printf("%p\n", ptr); // reference
    printf("%d\n", *ptr); // dereference

    *ptr = 25;
    printf("%d", age);

    float pi = 3.14;
    // printf("%f\n", pi);
    // printf("%p\n", &pi);

    return 0;
}