//Write a program using structures to calculate the difference between two time periods using a user-defined function.
#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time calculateTimeDifference(struct Time t1, struct Time t2) {
    struct Time diff;
    int totalSeconds1, totalSeconds2, diffSeconds;

    totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    diffSeconds = totalSeconds1 - totalSeconds2;

    diff.hours = diffSeconds / 3600;
    diffSeconds %= 3600;
    diff.minutes = diffSeconds / 60;
    diff.seconds = diffSeconds % 60;

    return diff;
}

int main() {
    struct Time time1, time2, diff;

    printf("Enter the first time (hh:mm:ss): ");
    scanf("%d:%d:%d", &(time1.hours), &(time1.minutes), &(time1.seconds));

    printf("Enter the second time (hh:mm:ss): ");
    scanf("%d:%d:%d", &(time2.hours), &(time2.minutes), &(time2.seconds));

    diff = calculateTimeDifference(time1, time2);

    printf("Time difference: %02d:%02d:%02d\n", diff.hours, diff.minutes, diff.seconds);

    return 0;
}
