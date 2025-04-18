# C++ Operations Guide

This document provides a quick reference to the most commonly used **C++ operations**. It includes brief explanations and syntax examples for:

- Arithmetic Operators  
- Relational Operators  
- Logical Operators  
- Bitwise Operators  
- Assignment Operators  

---

## 🧮 Arithmetic Operators

Used to perform basic mathematical operations.

| Operator | Description        | Example            |
|----------|--------------------|--------------------|
| `+`      | Addition            | `a + b`            |
| `-`      | Subtraction         | `a - b`            |
| `*`      | Multiplication      | `a * b`            |
| `/`      | Division            | `a / b`            |
| `%`      | Modulus (remainder)| `a % b`            |


## Relational Operators

Used to compare two values. Result is a boolean (true or false).
Operator	Description	Example
==	Equal to	a == b
!=	Not equal to	a != b
>	Greater than	a > b
<	Less than	a < b
>=	Greater or equal	a >= b
<=	Less or equal	a <= b

## Logical Operators

Used to perform logical operations, typically with boolean values.
Operator	Description	Example
&&	Logical AND	a && b
`		`
!	Logical NOT (negation)	!a

Syntax:

if (a > 0 && b > 0) {
    // Both conditions are true
}

## Bitwise Operators

Used to manipulate data at the bit level.
Operator	Description	Example
&	Bitwise AND	a & b
`	`	Bitwise OR
^	Bitwise XOR	a ^ b
~	Bitwise NOT	~a
<<	Left Shift	a << 1
>>	Right Shift	a >> 1


## Assignment Operators

Used to assign values to variables. Often combined with arithmetic or bitwise operators.
Operator	Description	Example
=	Assignment	a = b
+=	Add and assign	a += b
-=	Subtract and assign	a -= b
*=	Multiply and assign	a *= b
/=	Divide and assign	a /= b
%=	Modulo and assign	a %= b
&=	Bitwise AND and assign	a &= b
`	=`	Bitwise OR and assign
^=	Bitwise XOR and assign	a ^= b
<<=	Left shift and assign	a <<= 1
>>=	Right shift and assign	a >>= 1

