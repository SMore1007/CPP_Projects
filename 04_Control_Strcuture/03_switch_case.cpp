#include<iostream>
using namespace std;

int main()
{
    int num = 3;

    switch (num){
        case (1):
        {
            cout << "One" << endl;
            break;
        }
        case (2):
        {
            cout << "Two" << endl;
            break;
        }
        case (3):
        {
            cout << "Three" << endl;
            break;
        }
        default:
        {
            cout << "Out of range" << endl;
            break;
        }
    }
}