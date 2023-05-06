/* Example
    Converting from decimal to binary:
    To convert the decimal number 13 to binary, we can use the following steps:

    1. Divide the decimal number by 2 and write down the remainder (either 0 or 1). 
    - 13 divided by 2 is 6 with a remainder of 1, so the first binary digit is 1.
    2. Divide the quotient from step 1 by 2 and write down the remainder.
    - 6 divided by 2 is 3 with a remainder of 0, so the second binary digit is 0.
    3. Repeat step 2 until the quotient is 0.
    - 3 divided by 2 is 1 with a remainder of 1, so the third binary digit is 1.
    - 1 divided by 2 is 0 with a remainder of 1, so the fourth binary digit is also 1.
    4. Write the binary digits in reverse order to get the binary representation of the decimal number.
    - The binary representation of 13 is 1101.

    Converting from binary to decimal:
    To convert the binary number 1101 to decimal, we can use the following steps:

    1. Write down the binary digits and their place values.
    - 1 x 2^3 + 1 x 2^2 + 0 x 2^1 + 1 x 2^0
    2. Multiply each digit by its corresponding place value.
    - 1 x 2^3 = 8
    - 1 x 2^2 = 4
    - 0 x 2^1 = 0
    - 1 x 2^0 = 1
    3. Add up the results from step 2.
    - 8 + 4 + 0 + 1 = 13
    4. The decimal representation of the binary number 1101 is 13.
*/

// Binary to Decimal 13
const thirdIdx = 1 * 3 ** 2;
const secondIdx = 1 * 2 ** 2;
const firstIdx = 0 * 1 ** 2;
const zeroIdx = 1 * 0 ** 3;

const binToDec = thirdIdx + secondIdx + firstIdx + zeroIdx;

console.log(binToDec);

// Decimal to binary
const decimalNumber = 13;
let quotient = decimalNumber;
let binaryDigits = [];

// Convert decimal number to binary
while (quotient > 0) {
	console.log('quotient', quotient);
	const remainder = quotient % 2;
	console.log('remainder', remainder);
	binaryDigits.push(remainder);
	quotient = Math.floor(quotient / 2);
}

// Reverse the binary digits to get the binary representation
const binaryArray = binaryDigits.reverse();

// Join the binary array into a string
const binaryString = binaryArray.join('');

console.log(binaryString); // Outputs "1101"

// Binary to Decimal 13
// const thirdIdx1 = 1 * 3 ** 2;
const secondIdx2 = 1 * 2 ** 2;
const firstIdx3 = 0 * 1 ** 2;
const zeroIdx4 = 1 * 0 ** 3;

const binToDec1 = secondIdx2 + firstIdx3 + zeroIdx4;

console.log(binToDec1);
