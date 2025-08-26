#include <stdio.h>

// defined a function
void greet(char name[]) {
    printf("Hello %s\n", name);
    printf("Hope you are doing great\n");
}

void student(char name[], int age, float marks);

int addition(int a, int b, int c) {
    return a + b + c;
    // printf("I am addition"); // unreachable code
}

int main() {
    // greet("Tom"); // calling the function
    // greet("Jon");

    int result = addition(10, 20, 30);
    printf("%d", result);

    // student("Peter", 16, 94.5);
    // student("Jonathan", 17, 86.25);
    // student("Steve", 19, 68.6);
    // student("William", 15, 85.3);

    return 0;
}

void student(char name[], int age, float marks) {
    printf("Student name: %s\n", name);
    printf("Student age: %d\n", age);
    printf("Student marks: %.2f\n", marks);
}