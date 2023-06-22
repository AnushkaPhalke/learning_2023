
#include <stdio.h>
#include <string.h>

struct Student {
  int rollno;
  char name[20];
  float marks;
};

void parse_string(char *string, struct Student *students, int n) {
  char *token;
  int i;

  for (i = 0; i < n; i++) {
    token = strtok(string, " ");
    students[i].rollno = atoi(token);
    token = strtok(NULL, " ");
    strcpy(students[i].name, token);
    token = strtok(NULL, " ");
    students[i].marks = atof(token);
  }
}

int main() {
  char string[] = "1001 Aron 100.00 1002 Ben 99.00";
  struct Student students[2];

  parse_string(string, students, 2);

  for (int i = 0; i < 2; i++) {
    printf("Rollno: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
  }

  return 0;
}
