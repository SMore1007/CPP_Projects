#include<iostream>
using namespace std;

void Sum()
{
    NewLabel:
    cout << "Sum is " << 56 << endl;

    goto NewLabel;
}

int main()
{
    int val;

    Goto_Label:
        cout << "Enter a value " << endl;
        cin >> val;

        if (val != 0)
        {
            goto Goto_Label;
            ;
        }
        
        cout << "now you entered 0 " << endl;

        Sum();
        return 0;
}


