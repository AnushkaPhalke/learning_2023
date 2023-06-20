
#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

void swapFields(struct Student* s1, struct Student* s2) {
    // Swap the name fields
    char tempName[50];
    strcpy(tempName, s1->name);
    strcpy(s1->name, s2->name);
    strcpy(s2->name, tempName);

    // Swap the age fields
    int tempAge = s1->age;
    s1->age = s2->age;
    s2->age = tempAge;
}

int main() {
    struct Student student1, student2;

    printf("Enter details for student 1:\n");
    printf("Enter name: ");
    scanf("%s", student1.name);
    printf("Enter age: ");
    scanf("%d", &(student1.age));

    printf("\nEnter details for student 2:\n");
    printf("Enter name: ");
    scanf("%s", student2.name);
    printf("Enter age: ");
    scanf("%d", &(student2.age));

    printf("\nBefore swapping:\n");
    printf("Student 1:\nName: %s\nAge: %d\n", student1.name, student1.age);
    printf("Student 2:\nName: %s\nAge: %d\n", student2.name, student2.age);

    // Swap the fields using pointers
    swapFields(&student1, &student2);

    printf("\nAfter swapping:\n");
    printf("Student 1:\nName: %s\nAge: %d\n", student1.name, student1.age);
    printf("Student 2:\nName: %s\nAge: %d\n", student2.name, student2.age);

    return 0;
}
