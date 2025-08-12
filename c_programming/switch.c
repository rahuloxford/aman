#include <stdio.h>

int main() {
    printf("Enter day number? ");
    int day;
    scanf("%d", &day);

    switch (day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Weekday");
            break;
        case 6:
        case 7:
            printf("Weekend");
            break;
        default:
            printf("Invalid day entered");
    }

    // switch (day) {
    //     case 1:
    //         printf("Monday");
    //         break;
    //     case 2:
    //         printf("Tuesday");
    //         break;
    //     case 3:
    //         printf("Wednesday");
    //         break;
    //     case 4:
    //         printf("Thursday");
    //         break;
    //     case 5:
    //         printf("Friday");
    //         break;
    //     case 6:
    //         printf("Saturday");
    //         break;
    //     case 7:
    //         printf("Sunday");
    //         break;
    //     default:
    //         printf("Invalid day entered");
    // }

    return 0;
}