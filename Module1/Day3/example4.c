
#include <stdio.h>

void findSmallestAndLargestDigits(int n, int numbers[]) {
    if (n <= 0) {
        printf("Not Valid\n");
        return;
    }

    int smallestDigit = 9;
    int largestDigit = 0;

    for (int i = 0; i < n; i++) {
        int number = numbers[i];

        while (number > 0) {
            int digit = number % 10;
            if (digit < smallestDigit) {
                smallestDigit = digit;
            }
            if (digit > largestDigit) {
                largestDigit = digit;
            }
            number /= 10;
        }
    }

    printf("Smallest Digit: %d\n", smallestDigit);
    printf("Largest Digit: %d\n", largestDigit);
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid value of n.\n");
        return 0;
    }

    int numbers[n];

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    findSmallestAndLargestDigits(n, numbers);

    return 0;
}
