#include <stdio.h>

int main() {
    //  type casting?
    //  convert one of data into another.

    // two types of casting--

    // implicit casting (automatic)
    int num1 = 'A';
    printf("%d\n", num1);


    // explicit casting (manually)
    int a = 10;
    int b = 3;
    float c = (float)a / b;

    printf("%f", c);

}