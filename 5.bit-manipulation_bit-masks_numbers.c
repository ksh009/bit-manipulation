#include <stdio.h>

#define BITMASK 0x0F // define bitmask as 00001111 in binary (or 15 in decimal)

int main()
{
    unsigned char num = 0xAC; // binary 10101100
    printf("num = %x\n", num);

    unsigned char masked = num & BITMASK; // apply the bitmask to num using the bitwise AND operator
    printf("masked = %x\n", masked);      // prints 0xC, which is binary 1100 (the last 4 bits of num)

    unsigned char inverted_mask = ~BITMASK;        // invert the bitmask using the bitwise NOT operator
    printf("inverted mask = %x\n", inverted_mask); // prints 0xF0, which is binary 11110000

    unsigned char cleared = num & inverted_mask; // clear the last 4 bits of num by applying the inverted bitmask
    printf("cleared = %x\n", cleared);           // prints 0xA0, which is binary 10100000
}
