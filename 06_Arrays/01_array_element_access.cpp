#include<iostream>
using namespace std;

int main()
{
    int arr[] = {12,45,13,54};
    int len = sizeof(arr) / sizeof(int);
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}