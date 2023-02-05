#include <iostream>
#include <cmath>
using namespace std;
float calculateMoney(int age, int priceT);
main()
{
    int age, priceT;
    float priceW;
    float result;
    cout << "Enter Lily's age: ";
    cin >> age;
    cout << "Enter Price of Washing Machine: ";
    cin >> priceW;
    cout << "Enter Price of Toy: ";
    cin >> priceT;
    
    result = calculateMoney(age, priceT);
    result = ceil(result);
    if (result > priceW)
    {
        result = result - priceW;
        cout << "YES!! ENOUGH MONEY!" << endl;
        cout << result << " $ left." << endl;
    }
    else
    {
        result = priceW - result;
        cout << "NO!! NOT ENOUGH MONEY!" << endl;
        cout << result << " $ required." << endl;
    }

}



float calculateMoney (int age, int priceT)
{
    int toy=0;
    int money=0;
    int birthday = 10;
    float total;
    for (int count = 1; count <= age; count = count + 1)
    {
        if (count % 2 != 0)
        {
            toy = toy + 1;
        }
        else
        {
            money = money++ + (birthday - 1);
            birthday = (birthday + 10);
        }
    }
    toy = toy*priceT;
    cout << toy << endl;
    cout << money << endl;
    total = toy + money;
    cout << total << endl;
    return total;
}