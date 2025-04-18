# C++ Operators

This README provides a concise overview of the different types of operators available in C++. Operators are symbols that tell the compiler to perform specific mathematical or logical manipulations.

## Table of Contents

1.  **Arithmetic Operators**
2.  **Assignment Operators**
3.  **Comparison Operators**
4.  **Logical Operators**
5.  **Bitwise Operators**
6.  **Increment and Decrement Operators**
7.  **Conditional (Ternary) Operator**
8.  **Comma Operator**
9.  **Member Access Operators**
10. **Pointer Operators**
11. **Other Operators**
12. **Operator Precedence**

## 1. Arithmetic Operators

These operators perform mathematical calculations.

| Operator | Name           | Description                                  | Example       | Result (if a=10, b=5) |
| :------- | :------------- | :------------------------------------------- | :------------ | :-------------------- |
| `+`      | Addition       | Adds operands                                | `a + b`       | `15`                  |
| `-`      | Subtraction    | Subtracts the second operand from the first  | `a - b`       | `5`                   |
| `*`      | Multiplication | Multiplies operands                          | `a * b`       | `50`                  |
| `/`      | Division       | Divides the first operand by the second      | `a / b`       | `2`                   |
| `%`      | Modulus        | Returns the remainder of the division        | `a % b`       | `0`                   |

## 2. Assignment Operators

These operators assign values to variables.

| Operator | Name                     | Description                                        | Example       | Equivalent to |
| :------- | :----------------------- | :------------------------------------------------- | :------------ | :------------ |
| `=`      | Simple assignment        | Assigns the value of the right operand to the left | `a = b`       | `a = b`       |
| `+=`     | Add and assign           | Adds the right operand to the left and assigns     | `a += b`      | `a = a + b`   |
| `-=`     | Subtract and assign      | Subtracts the right operand from the left and assigns | `a -= b`      | `a = a - b`   |
| `*=`     | Multiply and assign      | Multiplies the left operand by the right and assigns | `a *= b`      | `a = a * b`   |
| `/=`     | Divide and assign        | Divides the left operand by the right and assigns    | `a /= b`      | `a = a / b`   |
| `%=`     | Modulus and assign       | Performs modulus on the left operand by the right and assigns | `a %= b`      | `a = a % b`   |
| `<<=`    | Left shift and assign    | Performs left bit shift and assigns                 | `a <<= 2`     | `a = a << 2`  |
| `>>=`    | Right shift and assign   | Performs right bit shift and assigns                | `a >>= 2`     | `a = a >> 2`  |
| `&=`     | Bitwise AND and assign   | Performs bitwise AND and assigns                   | `a &= b`      | `a = a & b`   |
| `|=`     | Bitwise OR and assign    | Performs bitwise OR and assigns                    | `a |= b`      | `a = a | b`   |
| `^=`     | Bitwise XOR and assign   | Performs bitwise XOR and assigns                   | `a ^= b`      | `a = a ^ b`   |

## 3. Comparison Operators

These operators compare two operands.

| Operator | Name                 | Description                                  | Example       | Result (if a=10, b=5) |
| :------- | :------------------- | :------------------------------------------- | :------------ | :-------------------- |
| `==`     | Equal to             | Checks if two operands are equal               | `a == b`      | `false`               |
| `!=`     | Not equal to         | Checks if two operands are not equal           | `a != b`      | `true`                |
| `>`      | Greater than         | Checks if the left operand is greater than the right | `a > b`       | `true`                |
| `<`      | Less than            | Checks if the left operand is less than the right    | `a < b`       | `false`               |
| `>=`     | Greater than or equal to | Checks if the left operand is greater than or equal to the right | `a >= b`      | `true`                |
| `<=`     | Less than or equal to    | Checks if the left operand is less than or equal to the right    | `a <= b`      | `false`               |

## 4. Logical Operators

These operators combine or modify boolean expressions.

| Operator | Name        | Description                                        | Example           | Result (if a=true, b=false) |
| :------- | :---------- | :------------------------------------------------- | :---------------- | :-------------------------- |
| `&&`     | Logical AND | Returns true if both operands are true             | `a && b`          | `false`                     |
| `||`     | Logical OR  | Returns true if at least one operand is true        | `a || b`          | `true`                      |
| `!`      | Logical NOT | Reverses the logical state of its operand           | `!a`              | `false`                     |

## 5. Bitwise Operators

These operators perform operations at the bit level.

| Operator | Name             | Description                                         | Example (if a=60 (00111100), b=13 (00001101)) | Result (Binary) | Result (Decimal) |
| :------- | :--------------- | :-------------------------------------------------- | :--------------------------------------------- | :-------------- | :--------------- |
| `&`      | Bitwise AND      | Sets a bit to 1 only if bits in both operands are 1 | `a & b`                                      | `00001100`    | `12`             |
| `|`      | Bitwise OR       | Sets a bit to 1 if at least one bit is 1          | `a | b`                                      | `00111101`    | `61`             |
| `^`      | Bitwise XOR      | Sets a bit to 1 if only one of the bits is 1       | `a ^ b`                                      | `00110001`    | `49`             |
| `~`      | Bitwise NOT      | Inverts all the bits                                | `~a`                                         | `11000011`    | `-61`            |
| `<<`     | Left shift       | Shifts bits to the left by a specified number      | `a << 2`                                     | `11110000`    | `240`            |
| `>>`     | Right shift      | Shifts bits to the right by a specified number     | `a >> 2`                                     | `00001111`    | `15`             |

**Note:** The result of the bitwise NOT operator (`~`) is machine-dependent and often involves two's complement representation.

## 6. Increment and Decrement Operators

These operators increase or decrease the value of a variable by one.

| Operator | Name        | Description                                                | Example   | Equivalent to |
| :------- | :---------- | :--------------------------------------------------------- | :-------- | :------------ |
| `++`     | Increment   | Increases the value of the operand by 1                    | `a++` or `++a` | `a = a + 1`   |
| `--`     | Decrement   | Decreases the value of the operand by 1                    | `a--` or `--a` | `a = a - 1`   |

**Prefix vs. Postfix:**

* **Prefix (`++a`, `--a`):** The value of the operand is changed *before* it is used in the expression.
* **Postfix (`a++`, `a--`):** The value of the operand is changed *after* it is used in the expression.

```c++
int x = 5;
int y = ++x; // y is 6, x is 6 (prefix)

int p = 5;
int q = p++; // q is 5, p is 6 (postfix)
```


## 7. Conditional (Ternary) Operator

This operator is a shorthand for a simple `if-else` statement.

| Operator | Name        | Description                                                                  | Example                                      |
| :------- | :---------- | :--------------------------------------------------------------------------- | :------------------------------------------- |
| `?:`     | Ternary     | Returns one of two values depending on the result of a boolean condition | `condition ? value_if_true : value_if_false` |

**Example:**

```c++
int age = 20;
std::string message = (age >= 18) ? "Adult" : "Minor"; // message will be "Adult"

## 8. Comma Operator

The comma operator evaluates two expressions from left to right and returns the value of the rightmost expression. It is often used in `for` loops.

| Operator | Name   | Description                                                               | Example               |
| :------- | :----- | :------------------------------------------------------------------------ | :-------------------- |
| `,`      | Comma  | Separates two expressions, the result is the value of the second expression | `expression1, expression2` |

**Example:**
```c++
int i, j;
for (i = 0, j = 10; i < 5; ++i, --j) {
    // ...
}


## 9. Member Access Operators

These operators are used to access members (variables and functions) of classes, structures, and unions.

| Operator | Name                     | Description                                                              | Example                                  |
| :------- | :----------------------- | :----------------------------------------------------------------------- | :--------------------------------------- |
| `.`      | Member access (dot)      | Used to access members of a class, structure, or union through an object | `object.member`                          |
| `->`     | Pointer to member access | Used to access members of a class, structure, or union through a pointer | `pointer->member`                        |

**Example:**
```c++
class MyClass {
public:
    int data;
    void display() {}
};

MyClass obj;
MyClass *ptr = &obj;

obj.data = 10;     // Accessing member using dot operator
ptr->display();   // Accessing member using arrow operator

## 10. Pointer Operators

These operators are used to work with pointers (variables that store memory addresses).

| Operator | Name        | Description                                                                 | Example        |
| :------- | :---------- | :-------------------------------------------------------------------------- | :------------- |
| `&`      | Address-of  | Returns the memory address of an operand                                    | `&variable`    |
| `*`      | Dereference | Accesses the value stored at the memory address held by a pointer           | `*pointer`     |

**Example:**
```c++
int num = 25;
int *ptr = &num; // ptr stores the memory address of num

std::cout << "Value of num: " << num << std::endl;     // Output: 25
std::cout << "Address of num: " << &num << std::endl;  // Output: (memory address)
std::cout << "Value pointed to by ptr: " << *ptr << std::endl; // Output: 25

## 11. Other Operators

| Operator | Name                       | Description                                                                 | Example               |
| :------- | :------------------------- | :-------------------------------------------------------------------------- | :-------------------- |
| `sizeof` | Sizeof operator          | Returns the size in bytes of a variable or data type                        | `sizeof(int)`         |
| `typeid` | Type identification      | Returns a `std::type_info` object that describes the type of an expression | `typeid(variable)`    |
| `::`     | Scope resolution         | Used to access static members, global identifiers, or members of a namespace | `ClassName::staticMember`, `::globalVariable`, `Namespace::member` |
| `new`    | Dynamic memory allocation  | Allocates memory from the heap                                            | `int *arr = new int[10];` |
| `delete` | Dynamic memory deallocation | Releases memory previously allocated with `new`                             | `delete[] arr;`        |