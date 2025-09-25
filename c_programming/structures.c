#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int age;
    int rno;
    float height;
    float weight;
};

int main() {
    // structure's

    // store the student details of 5 students:
    // [name, age, rno, height, weight]

    struct Student s1 = {"Owen Cooper", 25, 4598654, 5.8, 68.9};
    struct Student s2 = {"Tom Holland", 17, 7878654, 5.6, 90.9};
    struct Student s3 = {"Peter Parker", 27, 9454615, 5.10, 74.9};

    // strcpy(s1.name, "Owen Cooper");
    // s1.age = 25;
    // s1.rno = 4598654;
    // s1.height = 5.8;
    // s1.weight = 59.8;

    // strcpy(s2.name, "Tom Holland");
    s2.age = 55;
    // s2.rno = 5676857;
    // s2.height = 5.10;
    // s2.weight = 75.8;
    
    // strcpy(s3.name, "Steve rogers");
    // s3.age = 57;
    // s3.rno = 4798664;
    // s3.height = 6.1;
    // s3.weight = 86.2;

    printf("Name: %s, Age: %d, Rno: %d, Height: %.1f, Weight: %.1f\n", s1.name, s1.age, s1.rno, s1.height, s1.weight);
    printf("Name: %s, Age: %d, Rno: %d, Height: %.1f, Weight: %.1f\n", s2.name, s2.age, s2.rno, s2.height, s2.weight);
    printf("Name: %s, Age: %d, Rno: %d, Height: %.1f, Weight: %.1f\n", s3.name, s3.age, s3.rno, s3.height, s3.weight);

    return 0;
}