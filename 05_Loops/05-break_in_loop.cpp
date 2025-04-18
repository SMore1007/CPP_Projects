#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number between 1 to 9" << endl;
    cin >> n;

    for (int i = 0; i <= 10; i++)
    {
        if (i == n)
        {
            break;
        }
        cout << "Step = " << i << endl;
    }
    
    return 0;
}