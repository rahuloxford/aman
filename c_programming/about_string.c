#include <stdio.h>
#include <string.h>

int main() {

    char firstName[] = "Chris";
    char lastName[] = "Hemsworth";

    // printf("Actor: %s %s\n", firstName, lastName);
    // printf("Length: %d", sizeof(firstName));

    // another way of creating strings
    char favoriteActor[] = {'B', 'r', 'a', 'd', '\0'};
    // printf("%s\n", favoriteActor);
    // printf("Length: %d", sizeof(favoriteActor));

    // modify strings
    // lastName[0] = 'T';
    // printf("Actor: %s %s\n", firstName, lastName);


    // special character
    // printf("The North \n\tRemembers");

    // printf("The \'North\' Remembers");


    // string functions

    // length
    char favoriteShow[30] = "Breaking Bad";
    printf("%d\n", sizeof(favoriteShow));
    // printf("%d\n", strlen(favoriteShow));

    char show[30];
    strcpy(show, favoriteShow);
    printf("%s\n", favoriteShow);
    printf("%s", show);


    return 0;
}