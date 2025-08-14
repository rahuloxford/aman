#include <stdio.h>

int main() {

    // arrays?
    // used to store multiple items of same type inside
    // a single variable.

    // why use arrays?
    // store 5 student rnos?
    // int rno1 = 90;
    // int rno2 = 45;
    // int rno3 = 43;

    // how to create an array?

    // index no:   0   1   2   3   4
    int rnos[] = {34, 13, 25, 19, 37, 27};
    // how to calculate the length of array?
    int length = sizeof(rnos) / sizeof(rnos[0]);

    // output using the for loop
    // for (int i = 0; i < length; i++) {
    //     printf("%d ", rnos[i]);
    // }


    // another way of creating array?

    int arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);

    // input
    for (int i = 0; i < size; i++) {
        int element;
        printf("enter a digit here: ");
        scanf("%d", &element);
        arr[i] = element;
    }

    // output
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}