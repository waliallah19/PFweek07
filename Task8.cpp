#include <iostream>
using namespace std;

float calculateMoney(int, float , int);
main()
{
    int age,p;
    float price; 
    int enough;
    cout << "Enter Lily's age: ";
    cin >> age;
    cout << "Enter Price of Washing machine: ";
    cin >> price;
    cout << "Enter price at which she sold her toys: ";
    cin >> p;
    enough = calculateMoney(age, price, p);
}
float calculateMoney(int age, float price, int p)
{
    int toys = 0,gmoney =0, giftmoney = 0, toymoney, money;
    for (int count1 = 1; count1 <= age; count1 = count1 + 2)
    {
        toys =toys + 1;
    }
    for (int count2 = 2; count2 <= age; count2 = count2 + 2)
    {
        gmoney = gmoney + 10;
        giftmoney = gmoney + giftmoney;
    }
    toymoney = toys * p;
    money = (giftmoney+toymoney)-(age/2);
    if(money > price)
    { 
        float diff;
        diff = money - price;
        cout<<"YES! You have "<<diff<<" $ left.";
    }
    else
    {
        float diff;
        diff = price - money;
        cout<<"NO! You need "<<diff<<" $ more.";
    }
}