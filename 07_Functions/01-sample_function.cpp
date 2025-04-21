#include<iostream>
using namespace std;

// Function prototype
int add(int a, int b);

// main function
int main()
{
    int Num1 = 10;
    int num2 = 30;
    int result = add(Num1, num2);

    cout << "Addition: " << result << endl;

    return 0;
}

// Function Definition
int add(int a, int b)
{
    return (a + b);
}