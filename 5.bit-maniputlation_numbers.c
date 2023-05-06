#include <stdio.h>

int main()
{
    /*
        __Calc binary for 10
        10 / 2 = 0
        5 / 2 = 1
        2 / 2 = 0
        1 / 2 = 1

        __Calc binary for 12
        12 / 2 = 0
        6 / 2 = 0
        3 / 2 = 1
        1 / 2 = 1
    */
    unsigned int num1 = 10; // binary 1010
    unsigned int num2 = 12; // binary 1100
    printf("num1 %u\n", num1);
    printf("num2 %u\n", num2);

    // Bitwise AND
    unsigned int result1 = num1 & num2;
    printf("num2 %u\n", result1);
    printf("Bitwise AND: %u\n", result1); // prints 8

    // Bitwise OR
    unsigned int result2 = num1 | num2;
    printf("Bitwise OR: %u\n", result2); // prints 14

    // Bitwise XOR
    unsigned int result3 = num1 ^ num2;
    printf("Bitwise XOR: %u\n", result3); // prints 6

    // Bitwise NOT
    unsigned int result4 = ~num1;
    printf("Bitwise NOT: %u\n", result4); // prints 4294967285

    // Left Shift
    unsigned int result5 = num1 << 2;
    printf("Left Shift: %u\n", result5); // prints 40

    // Right Shift
    unsigned int result6 = num1 >> 1;
    printf("Right Shift: %u\n", result6); // prints 5

    return 0;
}
