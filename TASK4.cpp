//Program TASK 4 Lab
#include <iostream>
using namespace std;
int main()
{
    int time,hours,mins,secs;
    string a,b,c;
    
    cout << "Enter a number: ";
    cin >> time;

    if (time>=0)
    {
        hours=time/3600;
        mins=(time%3600)/60;
        secs=((time%3600)%60)%60;
    }

    if (hours<10 && mins<10 && secs<10)
        {
            cout << "Time: " << "0" << hours << ":" << "0" << mins << ":" << "0" << secs;
        }
        else if (hours>=10 && mins>=10 && secs>=10)
        {
            cout << "Time: " << hours << ":" << mins << ":" << secs;
        }
        else if (hours>=10 && mins>=10 && secs<10)
        {
            cout << "Time: " << hours << ":" << mins << ":" << "0" << secs;
        }
        else if (hours<10 && mins<10 && secs>=10)
        {
            cout << "Time: " << "0" << hours << ":" << "0" << mins << ":" << secs;
        }
        else if (hours<10 && mins>=10 && secs<10)
        {
            cout << "Time: " << "0" << hours << ":" << mins << ":" << "0" << secs;
        }
        else if (hours>=10 && mins<10 && secs>=10)
        {
            cout << "Time: " << hours << ":" << "0" << mins << ":" << secs;
        }
        else if (hours>=10 && mins<10 && secs<10)
        {
            cout << "Time: " << hours << ":" << "0" << mins << ":" << "0" << secs;
        }
        else if (hours<10 && mins>=10 && secs>=10)
        {
            cout << "Time: " << "0" << hours << ":" << mins << ":" << secs;
        }
    return 0;
}