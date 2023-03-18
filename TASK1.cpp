//Program TASK 1 Lab
#include <iostream>
using namespace std;
int main()
{
    int a, adding, dividing, moduluss, multiplying;

    cout << "Enter a 4 digit number: ";
    cin >> a;
    cout << endl;

    adding = a+8;
    cout << "After adding 8: " << adding << endl;

    dividing = adding/3;
    cout << "Division by 3: " << dividing << endl;

    moduluss = dividing%3;
    cout << "Modulus by 5: " << moduluss << endl;

    multiplying = moduluss*5;
    cout << "Multiplication by 5: " << multiplying << endl;
    cout << endl << "Final result: " << multiplying << endl;

    return 0;
}