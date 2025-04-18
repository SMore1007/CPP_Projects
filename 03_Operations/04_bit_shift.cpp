/*

Bit shifting  to the Right by 1 place correcsponding to  dividing the number by 2. 

Bit shifting to the Left by 1 place correspoding to multiplying the number by 2.

<< left shift 
1 << 4  -> 1 left shift by 4 places

>> Right Shift

1 >> 4  -> 1 right shift by 4 places


*/
 
#include<iostream>
using namespace std;

int main()
{
    int a = 8;
    int b = 8;

    int leftshifted = a << 1; // Multiplying by 2 
    int rightshifted = b >> 1; // divide by 2
    cout << "Left shifted by 1  :" << a << "->" << leftshifted << endl;
    cout << "Right shifted by 1 :" << b << "->" << rightshifted << endl;
    
    return 0;
}
