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
    /*
    Example m=123, so n=123%10=3. 
    Then i=0*10+3=3 and m=123/10=12. 
    12 is not equal to 0 so n=12%10=2.
    Then i=3*10+2=32 and m=12/10=1.
    1 is not equal to 0 so n=1%10=1.
    Then i=32*10+1=321 and m=1/10=0.
    0 is equal to 0 so while loop stops.
    */
    for(i>=0;b=i%10;i=i/10) 
    { 
        b=(b+2)%10;
        cout << b; 
    }
    /*
    Continuing from example above:
    i=321 and is bigger than 0, b=321%10=1, i=321/10=32
    Then b=(1+2)%10=3 --> 1st b
    Then i=32 and is bigger than 0, b=32%10=2, i=32/10=3
    Then b=(2+2)%10=4 --> 2nd b
    Then i=3 and is bigger than 0, b=3%10=3, i=3/10=0
    Then b=(3+2)%10=5 -- 3rd b
    So result = 345
    */
   return 0; 
}