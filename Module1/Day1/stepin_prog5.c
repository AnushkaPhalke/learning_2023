#include <stdio.h>

int bit_operations(int num, int oper_type) {
    int result = num;  // Initialize the result with the input number

    if (oper_type == 1) {
        // Set the 1st bit
        result = result | 0x00000001;
    } else if (oper_type == 2) {
        // Clear the 31st bit
        result = result & 0x7FFFFFFF;
    } else if (oper_type == 3) {
        // Toggle the 16th bit
        result = result ^ 0x00008000;
    }

    return result;
}

int main() {
    int num = 123456789;  // Example input number
    int oper_type = 1;    // Example operation type

    int result = bit_operations(num, oper_type);
    printf("Result: %d\n", result);

    return 0;
}


