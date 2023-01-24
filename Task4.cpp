#include <iostream>
using namespace std;

void FrequencyChecker(int, int);
main()
{
    int number;
    int digit;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the digit: ";
    cin >> digit;
    FrequencyChecker(number, digit);
}
void FrequencyChecker(int number, int digit)
{
    int count = 0;
    int checking;
    while (checking > 0)
    {
        checking = number % 10;
        number = number / 10;
        if (checking == digit)
            count++;
    }
    cout << count;
}