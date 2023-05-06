#include <iostream>
using namespace std;

int main()
{
    unsigned int num1 = 0b1010; // binary literal
    unsigned int num2 = 0b1100; // binary literal

    // Bitwise AND
    unsigned int result1 = num1 & num2;
    cout << "Bitwise AND: " << bitset<4>(result1) << endl; // prints 1000

    // Bitwise OR
    unsigned int result2 = num1 | num2;
    cout << "Bitwise OR: " << bitset<4>(result2) << endl; // prints 1110

    // Bitwise XOR
    unsigned int result3 = num1 ^ num2;
    cout << "Bitwise XOR: " << bitset<4>(result3) << endl; // prints 0110

    // Bitwise NOT
    unsigned int result4 = ~num1;
    cout << "Bitwise NOT: " << bitset<4>(result4) << endl; // prints 0101

    // Left Shift
    unsigned int result5 = num1 << 2;
    cout << "Left Shift: " << bitset<4>(result5) << endl; // prints 101000

    // Right Shift
    unsigned int result6 = num1 >> 1;
    cout << "Right Shift: " << bitset<4>(result6) << endl; // prints 0101

    return 0;
}
