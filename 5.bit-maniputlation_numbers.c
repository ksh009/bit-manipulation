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

        __Calc binary for 8
        8 / 2 = 0 => (0 * 1 = 0)
        4 / 2 = 0 => (0 * 2 = 0)
        2 / 2 = 0 => (0 * 4 = 0)
        1 / 2 = 1 => (1 * 8 = 8)
    */
    unsigned int num1 = 10; // binary 1010
    unsigned int num2 = 12; // binary 1100
    printf("num1 %u\n", num1);
    printf("num2 %u\n", num2);

    // Bitwise AND
    unsigned int result1 = num1 & num2;
    printf("num2 %u\n", result1);
    printf("Bitwise AND: %u\n", result1); // prints 8 => in binary 1000

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

/*
    Bitwise operator benefits

        1. Efficiency: Bitwise operators are often faster and more efficient than other methods of manipulating binary numbers. This is because they can perform multiple operations in a single instruction, making them particularly useful for high-performance applications where speed is critical.

        2. Clarity: Bitwise operations can make code more concise and easier to understand. By using bitwise operators, you can express complex operations on binary data in a clear and simple way, which can help make your code more readable and maintainable.

        3. Portability: Bitwise operations are often more portable than other methods of binary manipulation. This is because they are supported by most programming languages and hardware architectures, so you can use them in a wide variety of systems and applications.

        4. Versatility: Bitwise operators are versatile and can be used for a wide range of operations, from simple bit manipulation to complex data structures and algorithms. By learning how to use bitwise operators effectively, you can open up a world of possibilities for manipulating binary data and creating efficient and elegant code.

*/
