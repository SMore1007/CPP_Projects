/*

💡 What is C++?

C++ is a powerful general-purpose programming language developed by Bjarne Stroustrup in 1979 at Bell Labs as an extension to the C language. It combines the features of procedural programming (like C) and object-oriented programming (OOP).
✨ Key Features:

    Fast and Efficient (close to hardware)

    Object-Oriented (classes, inheritance, polymorphism, etc.)

    Rich Standard Library (STL – vectors, maps, etc.)

    Portable (runs on many platforms)

    Supports both high-level and low-level programming


*/

#include<iostream>  // This is a preprocessor directive. It includes the standard input-output stream library
                    // which allows us to use input/output functionalities like cout and cin.

using namespace std; // This line tells the compiler to use the standard namespace.
                     // So, we can directly use cout and endl without prefixing them with 'std::'.

int main()           // This is the main function from where program execution starts.
{
    cout << "This is first CPP Program Output" << endl; 
    // 'cout' is used to print text to the console.
    // '<<' is the insertion operator, used to pass data to cout.
    // The text in double quotes is a string literal that will be printed.
    // 'endl' inserts a newline character and flushes the output buffer.

    return 0;        // This statement returns 0 to the operating system.
                     // It indicates that the program ended successfully.
}
