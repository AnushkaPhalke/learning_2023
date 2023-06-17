
#include <stdio.h>

int findLargestAfterDigitRemoval(int number) {
    int max = 0;
    int divisor = 1;

    while (divisor <= number) {
        int digit = (number / divisor / 10) * divisor + (number % divisor);
        if (digit > max) {
            max = digit;
        }
        divisor *= 10;
    }

    return max;
}

int main() {
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);
    int largest = findLargestAfterDigitRemoval(number);
    printf("The largest number after removing a single digit: %d\n", largest);
    return 0;
}
