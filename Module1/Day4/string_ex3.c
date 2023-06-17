
#include <stdio.h>

int main() {

  // Declare variables
  char time[100];
  int hours, minutes, seconds;

  // Get the time from the user
  printf("Enter the time in hh:mm:ss format: ");
  fgets(time, 100, stdin);

  // Extract the hours, minutes, and seconds from the time string
  hours = (time[0] - '0') * 10 + (time[1] - '0');
  minutes = (time[3] - '0') * 10 + (time[4] - '0');
  seconds = (time[6] - '0') * 10 + (time[7] - '0');

  // Compute the total seconds
  int total_seconds = hours * 3600 + minutes * 60 + seconds;

  // Print the total seconds
  printf("The total seconds is: %d\n", total_seconds);

  // Return 0 to indicate successful termination
  return 0;
}
