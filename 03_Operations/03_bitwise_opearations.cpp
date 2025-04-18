/*
Operator | Name               | Description                                             | Example (in binary)
&        | AND                | Sets each bit to 1 if both bits are 1                   | 5 & 3 → 101 & 011 = 001
` | `    | OR                 | Sets each bit to 1 if at least one bit is 1             | 5 | 3 → 0101 | 0011 = 1000
^        | XOR (Exclusive OR) | Sets each bit to 1 if only one bit is 1                 | 5 ^ 3 → 101 ^ 011 = 110
~        | NOT                | Flips all bits (0 → 1, 1 → 0)                           | ~5 → ~(00000101) = 11111010
<<       | Left Shift         | Shifts bits to the left and fills 0 on the right        | 5 << 1 → 1010 = 10
>>       | Right Shift        | Shifts bits to the right and discards bits on the right | 5 >> 1 → 010 = 2

*/

#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 3;

    cout << (a | b) << endl;
}