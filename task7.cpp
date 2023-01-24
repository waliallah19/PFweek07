#include <iostream>
using namespace std;
void calculatepercentage(int number);
main()
{
   int number;
   cout << "Enter number of digits: ";
   cin >> number;
   calculatepercentage(number);
}
void calculatepercentage(int number)
{
   float p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
   float p1p, p2p, p3p, p4p, p5p;
   for (int count = 0; count < number; count++)
   {
      int num;
      cout << "Enter digits: ";
      cin >> num;
      if (num < 200)
      {
         p1 = p1 + 1;
      }
      else if (num > 199 && num < 400)
      {
         p2 = p2 + 1;
      }
      else if (num > 399 && num < 600)
      {
         p3 = p3 + 1;
      }
      else if (num > 599 && num < 800)
      {
         p4 = p4 + 1;
      }
      else if (num > 799)
      {
         p5 = p5 + 1;
      }
   }
   p1p = (p1 / number) * 100;
   p2p = (p2 / number) * 100;
   p3p = (p3 / number) * 100;
   p4p = (p4 / number) * 100;
   p5p = (p5 / number) * 100;
   printf("Percentage of numbers less than 200 is %2.2f %",p1p);
   printf("\nPercentage of numbers between 200 and 400 is %2.2f %",p2p);
   printf("\nPercentage of numbers between 400 and 600 is %2.2f %",p3p);
   printf("\nPercentage of numbers between 600 and 800 is %2.2f %",p4p);
   printf("\nPercentage of numbers greater than 800 is %2.2f %",p5p);
}