/*

Create a C++ program that logs the temperature readings of a room for 7 days,
stores them in an array, and gives basic analytics like:

    Average temperature

    Highest temperature

    Lowest temperature

    Temperature on a specific day

*/

#include<iostream>
using namespace std;

// Avg temp of week
float AvgTempOfWeek(float temps[])
{
    float sum = 0;
    for (int i = 0; i < 7; i++)
    {
        sum += temps[i];
    }
    return (sum / 7);
}

// highest temp of week
float highestOfweek(float temps[])
{
    float high = temps[0];
    for (int i = 1; i < 7; i++)
    {
        if (high < temps[i])
        {
            high = temps[i];
        }
        
    }
    return high;
}


// lowest temp of week
float lowest(float temps[])
{
    float low = temps[0];
    for (int i = 1; i < 7; i++)
    {
        if (low > temps[i])
        {
            low = temps[i];
        }
        
    }
    return low;
}

int main()
{
    float weekTemp[7];
    
    cout << "Weely Tempreture data monitoring\n";

    for (int i = 0; i < 7; i++)
    {
        cout << "Enter temp of day " <<  i+1 << endl;
        cin >> weekTemp[i];
    }
    

    float avg  = AvgTempOfWeek(weekTemp);
    cout << "Avg week tempreture: " << avg << endl;

    float High = highestOfweek(weekTemp);
    cout << "Highest temp of week is: " << High << endl;

    float Low = lowest(weekTemp);
    cout << "lowest temp of week is: " << Low << endl;
    
    int day;
    cout << "Which specific day you want a tempretur: " << endl;
    cin >> day;

    cout << "Temp at day " << day+1 << " is: " << weekTemp[day] << endl; 

    return 0;
}