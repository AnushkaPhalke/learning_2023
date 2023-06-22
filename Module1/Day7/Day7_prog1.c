#include <stdio.h>
#include <stdlib.h>

void copy_file(char *source_file, char *target_file) {
  FILE *source, *target;
  char ch;

  // Open the source file.
  source = fopen(source_file, "r");
  if (source == NULL) {
    printf("Could not open source file.\n");
    exit(1);
  }

  // Open the target file.
  target = fopen(target_file, "w");
  if (target == NULL) {
    printf("Could not open target file.\n");
    exit(1);
  }

  // Copy the file.
  while ((ch = fgetc(source)) != EOF) {
    fputc(ch, target);
  }

  // Close the files.
  fclose(source);
  fclose(target);
}

int main() {
  char source_file[] = "source.txt";
  char target_file[] = "target.txt";

  // Copy the file.
  copy_file(source_file, target_file);

  printf("File copied successfully.\n");

  return 0;
}

