#include <stdio.h>

int main() {

    // loops?
    // when you want to do the same task again & again.

    // Q. print "Hello World" 200 times

    // int count = 1;

    // while (count <= 200) {
    //     printf("Hello World %d\n", count);
    //     count++; // increment
    // }
    

    // Q. print 1 to 40

    // int num = 1;
    // while (num <= 40) {
    //     printf("%d\n", num);
    //     num++;
    // }


    // Q. print 50 to 20

    // int num = 50;
    // while (num >= 20) {
    //     printf("%d\n", num);
    //     num--;
    // }


    // Q. print all the nums from a to b.

    int a, b;
    printf("Enter the start: ");
    scanf("%d", &a);
    printf("Enter the end: ");
    scanf("%d", &b);

    if (a < b) {
        while (a <= b) {
            if (a % 2 == 0) {
                printf("%d\n", a);
            }
            a++;
        }
    } else {
        while (a >= b) {
            if (a % 2 == 0) {
                printf("%d\n", a);
            }
            a--;
        }
    }
    

    return 0;
}