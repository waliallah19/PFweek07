#include<iostream>
using namespace std;

void fabnacci(int);
main()
{
 int number;
 cout<<"Enter the number: ";
 cin>>number;
 fabnacci(number);
}
void fabnacci(int number)
{
 int previous = 0;
 int current = 1;
 int next;
 cout<<previous<<","<<current;
 for( int count = 1 ; count <= number-2 ; count++)
 {
  next = previous + current;
  cout<<","<<next;
  previous = current;
  current = next;
 }
}