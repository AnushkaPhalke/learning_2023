
#include <stdio.h>

int countSetBits(unsigned int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    unsigned int arr[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(arr) / sizeof(arr[0]);
    int totalBits = 0;

    for (int i = 0; i < size; i++) {
        totalBits += countSetBits(arr[i]);
    }

    printf("Total number of set bits: %d\n", totalBits);

    return 0;
}
