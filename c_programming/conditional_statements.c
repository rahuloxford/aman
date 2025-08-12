#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // if else

    // if (false) {
    //     printf("If is running..");
    // } else {
    //     printf("Else is running..");
    // }


    // Q. print if a user can vote or not?

    // printf("What is your age? ");
    // int age;
    // scanf("%d", &age);
    
    // if (age >= 18) {
    //     printf("You are allowed to vote");
    // } else {
    //     printf("You are not allowed to vote");
    // }


    // Q. print if a number given by the user is even or odd?

    // printf("Enter a number? ");
    // int number;
    // scanf("%d", &number);

    // if (number % 2 == 0) {
    //     printf("Even");
    // } else {
    //     printf("Odd");
    // }
    

// if else ladder
    // if (condition) {
    //     code
    // } else if (condition) {
    //     code
    // } else if (condition) {
    //     code
    // } else if (condition) {
    //     code
    // } else if (condition) {
    //     code
    // } else {
    //     code
    // }

    // Q. take a number from user and check if it is
    // positive or negative or zero

    // printf("Enter a number? ");
    // int number;
    // scanf("%d", &number);

    // if (number > 0) {
    //     printf("POSITIVE");
    // } else if (number < 0) {
    //     printf("NEGATIVE");
    // } else {
    //     printf("ZERO");
    // }


    // Q. take the marks from user?
    // print the grade he gets.

    // printf("What is your marks? ");
    // float marks;
    // scanf("%f", &marks);

    // if (marks > 100 || marks < 0) {
    //     printf("Wrong marks entered");
    // } else if (marks >= 95) {
    //     printf("A+");
    // } else if (marks >= 90) {
    //     printf("A");
    // } else if (marks >= 80) {
    //     printf("B");
    // } else if (marks >= 70) {
    //     printf("C");
    // } else if (marks >= 60) {
    //     printf("D");
    // } else if (marks >= 50) {
    //     printf("E");
    // } else {
    //     printf("FAIL");
    // }

    
    char username[30];
    printf("Type your user name: ");
    fgets(username, sizeof(username), stdin);

    // Remove newline character left by fgets
    username[strcspn(username, "\n")] = '\0';

    int password;
    printf("Type your password: ");
    scanf("%d", &password);

    // Use strcmp to compare strings
    if (strcmp(username, "timmy123") == 0 && password == 12345678) {
        printf("Login successful\n");
    } else {
        printf("Login rejected\n");
    }

}
