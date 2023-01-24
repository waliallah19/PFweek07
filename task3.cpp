#include<iostream>
using namespace std;

void TotalDigits(int);
main()
{
 int number;
 cout<<"Enter a number: ";
 cin>>number;
 TotalDigits(number);
}
void TotalDigits(int number)
{
 int count = 0;
 int digit;
 while(number != 0)
 {
  number = number / 10;
  count ++;
 }
 cout<<count;
}