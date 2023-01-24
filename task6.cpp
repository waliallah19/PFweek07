#include <iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd);
main()
{
    int number1, number2;
    int gcd, lcm;
    cout << "Enter 1st number: ";
    cin >> number1;
    cout << "Enter 2nd number: ";
    cin >> number2;
    gcd = calculateGCD(number1, number2);
    lcm = calculateLCM(number1,number2,gcd);
    cout << "The GCD or HCF of given two integers is: " << gcd << endl;
    cout<<"The Lcm of two given integers is: "<<lcm;
}

int calculateGCD(int number1, int number2)
{
    int result;
    if (number1 < number2)
    {
        for (int count = number1; count > 0; count--)
        {
            int n1, n2;
            n1 = number1 % count;
            n2 = number2 % count;
            if (n1 == 0 && n2 == 0)
            {
                result = count;
                return result;
            }
        }
    }
    else
    {
        for (int count = number2; count > 0; count--)
        {
            int n1, n2;
            n1 = number1 % count;
            n2 = number2 % count;
            if (n1 == 0 && n2 == 0)
            {
                result = count;
                return result;
            }
        }
    }
}

int calculateLCM(int number1, int number2, int gcd)
{
   int lcm;
   lcm = (number1*number2)/gcd;
    return lcm;
}
