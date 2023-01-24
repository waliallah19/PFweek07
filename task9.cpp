#include <iostream>
using namespace std;

float calculatePrice(float money, int year);
main()
{
    float money, year;
    float enough,diff;
    cout << "Enter the inherited money: ";
    cin >> money;
    cout << "Enter the year until which Ivan has to live in the past: ";
    cin >> year;
    enough = calculatePrice(money, year);
    if (enough < money)
    {
        diff = money - enough;
        printf("YES! He will live a carefree life and will have %2.2f Dollars left.",diff);
    }
    else 
    {
        diff = enough - money;
        printf("NO! He will need %2.2f Dollars to survive.",diff);
    }
}

float calculatePrice(float money, int year)
{
    int age_diff=0,odd1;
    float result;
    int odd = 0, even = 0,evenm,oddm;
     for (int count1 = 1801; count1 <= year; count1 = count1 + 2)
    {
        odd = odd + 1;
        odd1 = odd + 19;
        cout<<"odd: "<<odd<<endl;
        age_diff = age_diff + (50 * odd1);
        cout<<"aged: "<<age_diff<<endl;
    }
    for (int count2 = 1800; count2 <= year; count2 = count2 + 2)
    {
        even = even + 1;
        cout<<"even: "<<even<<endl;
    }
   evenm = even * 12000;
   cout<<"Evenm: "<<evenm<<endl;
   oddm = (odd * 12000) + age_diff; 
   cout<<"oddm: "<<oddm<<endl;
   result = evenm + oddm;
   cout<<"Result: "<<result<<endl;
   return result;
}
