#include <stdio.h>

int main() {

    // print 50 to 80

    // int num = 50;
    // do {
    //     printf("%d\n", num);
    //     num++;
    // } while (num >= 80);


    // for loop

    // print the table of a number
    int number;
    printf("Enter the number? ");
    scanf("%d", &number);

    for (int i = 1; i <= 10; i++) {
        printf("%d\n", number * i);
    }

}