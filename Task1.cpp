#include<iostream>
using namespace std;

void printTable(int);
main()
{
 int number;
 cout<<"Enter the number: ";
 cin>>number;
 printTable(number);
}
void printTable(int number)
{
 for(int count = 1 ; count <= 10 ; count ++)
 {
  cout << number << " * " << count << " = " << number * count<<endl; 
 }
}