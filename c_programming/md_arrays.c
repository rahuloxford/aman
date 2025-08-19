#include <stdio.h>

int main() {

    // 2D arrays
    // int arr[3][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}
    // };

    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }


    // another way
    // int arr[3][3];

    // // input
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         printf("Enter the value for index (%d, %d): ", i, j);
    //         int element;
    //         scanf("%d", &element);
    //         arr[i][j] = element;
    //     }
    // }

    // printf("Array elements: \n");
    // // output
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }



    // 3D arrays

    // char letters[2][2][2] = {
    //     {
    //         {'a', 'b'},
    //         {'c', 'd'}
    //     },
    //     {
    //         {'e', 'f'},
    //         {'g', 'h'}
    //     }
    // };

    int nums[2][2][2];

    // input
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("Enter the number for index (%d, %d, %d): ", i, j, k);
                int element;
                scanf("%d", &element);
                nums[i][j][k] = element;
            }
        }
    }

    // output
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d ", nums[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}