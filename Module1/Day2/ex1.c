#include <stdio.h>

void print_exponent_parts(double x) {
    // Convert double to unsigned long long to access its bits
    unsigned long long bits = *(unsigned long long *)&x;

    // Extract the exponent bits
    unsigned long long exponent_bits = (bits >> 52) & 0x7FF;

    // Convert exponent bits to hexadecimal and binary
    char exponent_hex[16];
    sprintf(exponent_hex, "%#llx", exponent_bits);

    char exponent_binary[13];
    for (int i = 0; i < 11; i++) {
        exponent_binary[i] = ((exponent_bits >> (10 - i)) & 1) + '0';
    }
    exponent_binary[11] = '\0';

    // Print the results
    printf("Exponent in hexadecimal format: %s\n", exponent_hex);
    printf("Exponent in binary format: %s\n", exponent_binary);
}

int main() {
    double x = 0.7;
    print_exponent_parts(x);

    return 0;
}

