#include <iostream>
using namespace std;

void sumofdigits(int);
main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    sumofdigits(number);
    }
void sumofdigits(int number)
{
    int count = 0,sum=0;
    int checking;
    while ( number > 0)
    {
        checking = number % 10;
        number = number / 10;
        sum = sum + checking;
    }
    cout << sum;
}