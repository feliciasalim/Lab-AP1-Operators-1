//Program TASK 3 Lab
#include <iostream>
using namespace std;
int main()
{
    int i,b;
    
    cout << "Enter a 4 digit number: ";
    cin >> i;
    cout << endl;

    while (i>0)
    {
        b=b+i%10; //  sum all the numbers until the condition becomes false
        i=i/10;
    }
    
    cout << "Result: " <<b;
    return 0;
}