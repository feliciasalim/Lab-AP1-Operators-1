//Program TASK 2 Lab
#include <iostream>
using namespace std;
int main()
{
    int i,b,m,n;

    cout << "Enter a 6 digit number: ";
    cin >> m;
    cout << endl;

    while (m!=0) 
    {
        n = m%10;
        i = i*10+n;
        m = m/10;
    }
    
    //The loop above is used to reverse the order of the input number (m).
    //It will stop when m is equal to 0.
    
    for(i>=0;b=i%10;i=i/10) 
    { 
        b=(b+2)%10;
        cout << b; 
    }
    
    //The loop above is used to add each number from the 'while loop' above with 2 and only take the final digit 
    
   return 0; 
}