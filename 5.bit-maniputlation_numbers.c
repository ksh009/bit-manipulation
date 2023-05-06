#include <stdio.h>

int main()
{
    /*
        NB => With 4 bits, you can represent up to 2^4 = 16 different values. The largest value that can be represented with 4 bits is 2^4 - 1 = 15.

        NB => The largest unsigned integer that can be represented with 8 bits is 2^8 - 1, which equals 255. 8 bits also equals 1 byte

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

        __Calc binary for 14
        14 / 2 = 0 => (0 * 1 = 0)
        7 / 2 = 1 => (1 * 2 = 2)
        3 / 2 = 1 => (1 * 4 = 4)
        1 / 2 = 1 => (1 * 8 = 8)

        __Calc binary for 6
        6 / 2 = 0 => (0 * 1 = 0)
        3 / 2 = 1 => (1 * 2 = 2)
        1 / 2 = 1 => (1 * 4 = 4)

        __Calc binary for 5
        2 / 2 = 1 => (1 * 1 = 1)
        2 / 2 = 0 => (0 * 2 = 0)
        1 / 2 = 1 => (1 * 4 = 4)

        __Calc binary for 40
        40 / 2 = 0 (0 * 0 = 0)
        20 / 2 = 0 (0 * 2 = 0)
        10 / 2 = 0 (0 * 4 = 0)
        5 / 2 = 1 (1 * 8 = 8)
        2 / 2 = 0 (0 * 16 = 0)
        1 / 2 = 1 (1 * 32 = 32)
    */
    unsigned int num1 = 10; // binary 1010
    unsigned int num2 = 12; // binary 1100
    printf("num1 %u\n", num1);
    printf("num2 %u\n", num2);

    /*
        1. AND (&): The AND operator compares each bit of two numbers and returns a new number with a 1 bit only if both corresponding bits are 1. Otherwise, the bit is set to 0.
    */
    // Bitwise AND
    unsigned int result1 = num1 & num2;
    printf("num2 %u\n", result1);
    printf("Bitwise AND: %u\n", result1); // prints 8 => in binary 1000

    /*
      2. OR (|): The OR operator compares each bit of two numbers and returns a new number with a 1 bit if either corresponding bit is 1. Otherwise, the bit is set to 0.
    */
    // Bitwise OR
    unsigned int result2 = num1 | num2;
    printf("Bitwise OR: %u\n", result2); // prints 14 => in binary 1110

    /*
        3. XOR (^): The XOR operator compares each bit of two numbers and returns a new number with a 1 bit only if the corresponding bits are different. Otherwise, the bit is set to 0.
    */
    // Bitwise XOR
    unsigned int result3 = num1 ^ num2;
    printf("Bitwise XOR: %u\n", result3); // prints 6 = in binary 0110

    /*
       4. NOT (~): The NOT operator flips all the bits of a number, i.e., 1s become 0s and 0s become 1s.
    */
    // Bitwise NOT
    unsigned int result4 = ~num1;
    printf("Bitwise NOT: %u\n", result4); // prints 5 => in binary 0101

    /*
      The left shift operator (<<) moves the bits of a number to the left by a specified number of positions.
    */
    // Left Shift
    unsigned int result5 = num1 << 2;
    printf("Left Shift: %u\n", result5); // prints 40 => in binary 0000 1010

    /*
        The right shift operator (>>) moves the bits of a number to the right by a specified number of positions. When we shift a number to the right, we lose the rightmost bits of the number.
    */
    // Right Shift
    unsigned int result6 = num1 >> 1;
    printf("Right Shift: %u\n", result6); // prints 5 => in binary 0101

    return 0;
}

/*
    Bitwise operator benefits

        1. Efficiency: Bitwise operators are often faster and more efficient than other methods of manipulating binary numbers. This is because they can perform multiple operations in a single instruction, making them particularly useful for high-performance applications where speed is critical.

        2. Clarity: Bitwise operations can make code more concise and easier to understand. By using bitwise operators, you can express complex operations on binary data in a clear and simple way, which can help make your code more readable and maintainable.

        3. Portability: Bitwise operations are often more portable than other methods of binary manipulation. This is because they are supported by most programming languages and hardware architectures, so you can use them in a wide variety of systems and applications.

        4. Versatility: Bitwise operators are versatile and can be used for a wide range of operations, from simple bit manipulation to complex data structures and algorithms. By learning how to use bitwise operators effectively, you can open up a world of possibilities for manipulating binary data and creating efficient and elegant code.

*/
