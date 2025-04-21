/*

Problem: Bill Calculator for a Grocery Store

Imagine you're helping a grocery store to automate their billing system. The store needs to:

    Take input for multiple items (name, price per unit, quantity).

    Calculate the total price for each item.

    Sum up the total bill.

    Apply a discount if the bill exceeds ₹500.

*/

#include<iostream>
using namespace std;


void getItemDetails(string *name, float *price, int *quantity);

float calculateTotalPrise(float *price, int *quantity);
float applyDiscount(float *total);
void displayBill(string *name, float *finalAmount, int *quantity);


void getItemDetails(string *name, float *price, int *quantity)
{
    cout << "Enter Name of item: " << endl;
    cin >> *name;
    cout << "Enter Total Quantity of the item: " << endl;
    cin >> *quantity;
    cout << "Enter Prise of one item: " << endl;
    cin >> *price;
}

float calculateTotalPrise(float *price, int *quantity)
{
    float tot = (*price * *quantity);
    return  tot;
}

float applyDiscount(float *total)
{
    cout << "\nCongraturation You are eligible for 10% discount" << endl;
    cout << "------------------------------------------------------------\n";
    float discountedAmmount = ((*total) * (10.0/100));
    return discountedAmmount;
}

void displayBill(string *name, float *finalAmount, int *quantity)
{
    cout << "------------------------------------------------------------\n";
    cout << "Item Name:      " << *name << endl;
    cout << "Total Quantity: " << *quantity << endl;
    cout << "Final Amount:   " << *finalAmount << endl;
    cout << "------------------------------------------------------------\n";
}


int main()
{
    string name;
    float price;
    int quantity;
    float total;
    float totalPrice;
    float Discount;
    float AfterDiscount;
    int flag;

    do
    {
        cout << "Enter 1 for System init: " << endl;
        cout << "Enter 0 shutdown " << endl;
        cin >> flag;
        if (flag == 1)
        {
            getItemDetails(&name,   &price, &quantity);
            totalPrice = calculateTotalPrise(&price, &quantity);
            
            if (totalPrice >= 500)
            {
                cout << "Under discount" << endl;
                Discount = applyDiscount(&totalPrice);
                AfterDiscount = totalPrice - Discount;
                displayBill(&name, &AfterDiscount, &quantity);
            }
            else
            {
                AfterDiscount = totalPrice;
                cout << "Your total amount is less than 500/- we cant apply any discount " << endl;
                displayBill(&name, &AfterDiscount, &quantity);
            }
            
        }
        
    } while (flag != 0);
    cout << "Thank you come again......" << endl;
    return 0;
}
