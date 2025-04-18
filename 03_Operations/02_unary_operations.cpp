/*

Unary Operaion ++ and -- for pre and post

a++ -> postfix increment
++a -> Prefix Increment
a-- -> Postfix Decrement
--a -> Prefix Decrement

*/

#include<iostream>
using namespace std;

int main()
{
    int a  = 10;

    cout << "a = " << a << endl;
    cout << "a++ = " << a++ << endl;
    cout << "++a = " << ++a << endl;
    cout << "a-- = " << a-- << endl;
    cout << "--a = " << --a << endl;
    return 0;
}