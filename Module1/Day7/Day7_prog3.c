
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct log_entry {
  int entry_no;
  char sensor_no[10];
  float temperature;
  int humidity;
  int light;
  char timestamp[10];
};

void extract_log_entries(FILE *file, struct log_entry *entries) {
  int i = 0;
  char line[100];

  while (fgets(line, sizeof(line), file)) {
    // Split the line into tokens.
    char *token = strtok(line, ",");
    entries[i].entry_no = atoi(token);
    token = strtok(NULL, ",");
    strcpy(entries[i].sensor_no, token);
    token = strtok(NULL, ",");
    entries[i].temperature = atof(token);
    token = strtok(NULL, ",");
    entries[i].humidity = atoi(token);
    token = strtok(NULL, ",");
    entries[i].light = atoi(token);
    token = strtok(NULL, ",");
    strcpy(entries[i].timestamp, token);
    i++;
  }
}

void print_log_entries(struct log_entry *entries, int num_entries) {
  for (int i = 0; i < num_entries; i++) {
    printf("Entry No: %d\n", entries[i].entry_no);
    printf("Sensor No: %s\n", entries[i].sensor_no);
    printf("Temperature: %.2f\n", entries[i].temperature);
    printf("Humidity: %d\n", entries[i].humidity);
    printf("Light: %d\n", entries[i].light);
    printf("Timestamp: %s\n", entries[i].timestamp);
  }
}

int main() {
  FILE *file = fopen("data.csv", "r");
  if (file == NULL) {
    fprintf(stderr, "Error opening file\n");
    exit(1);
  }

  struct log_entry entries[100];
  int num_entries = extract_log_entries(file, entries);
  fclose(file);

  print_log_entries(entries, num_entries);

  return 0;
}
