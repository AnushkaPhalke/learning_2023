#include <stdio.h>

// Function to swap two values of any type
void swapValues(void* a, void* b, size_t size) {
    char temp[size];
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
}

int main() {
    // Swap integers
    int x = 5, y = 10;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swapValues(&x, &y, sizeof(int));
    printf("After swapping: x = %d, y = %d\n", x, y);

    // Swap characters
    char a = 'A', b = 'B';
    printf("Before swapping: a = %c, b = %c\n", a, b);
    swapValues(&a, &b, sizeof(char));
    printf("After swapping: a = %c, b = %c\n", a, b);

    // Swap floating-point numbers
    double m = 3.14, n = 2.71;
    printf("Before swapping: m = %lf, n = %lf\n", m, n);
    swapValues(&m, &n, sizeof(double));
    printf("After swapping: m = %lf, n = %lf\n", m, n);

    return 0;
}
