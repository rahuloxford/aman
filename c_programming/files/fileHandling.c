#include <stdio.h>

int main() {

    FILE *fptr;
    // fptr = fopen("marvel.txt", "w"); // open file
    // fptr = fopen("marvel.txt", "a"); // open file
    fptr = fopen("marvel.txt", "r"); // open file

    // write into the file
    // fprintf(fptr, "\nGroot\n");
    // fprintf(fptr, "Rocket");

    // to read from file.
    
    // create a variable.
    char line[100];
    // store the data in that variable.
    while (fgets(line, 100, fptr)) {
        // print that variable
        printf("%s", line);
    }
    
    fclose(fptr); // close the file

    return 0;
}