
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int total = 0;

    for (int i = 0; i < size; i += 2) {
        total += arr[i];
    }

    printf("Sum of alternate elements: %d\n", total);

    return 0;
}
