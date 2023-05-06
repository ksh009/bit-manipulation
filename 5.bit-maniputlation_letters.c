#include <stdio.h>

int main()
{
    unsigned int num1 = 0xA; // binary 1010
    unsigned int num2 = 0xC; // binary 1100
    printf("num1 %x\n", num1);
    printf("num2 %x\n", num2);

    // Bitwise AND
    unsigned int result1 = num1 & num2;
    printf("Bitwise AND: %X\n", result1); // prints 8

    // Bitwise OR
    unsigned int result2 = num1 | num2;
    printf("Bitwise OR: %X\n", result2); // prints E

    // Bitwise XOR
    unsigned int result3 = num1 ^ num2;
    printf("Bitwise XOR: %X\n", result3); // prints 6

    // Bitwise NOT
    unsigned int result4 = ~num1;
    printf("Bitwise NOT: %X\n", result4); // prints F5

    // Left Shift
    unsigned int result5 = num1 << 2;
    printf("Left Shift: %X\n", result5); // prints 28

    // Right Shift
    unsigned int result6 = num1 >> 1;
    printf("Right Shift: %X\n", result6); // prints 5

    return 0;
}
