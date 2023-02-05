#include <iostream>
#include <cmath>
using namespace std;
float calculatePrice (float money, int years);
main()
{
    float money;
    int year;
    float result;
    cout << "Enter Inherited Money: ";
    cin >> money;
    cout << "Enter Year: ";
    cin >> year;

    result = calculatePrice(money, year);
    result = ceil(result);
    if (result < money)
    {
        result = money - result;
        cout << "YES! He will live a carefree life and will have " << result << " dollars left." << endl; 
    }
    else 
    {
        result = result - money;
        cout << "He will need " << result << " dollars to survive." << endl;
    }
}

float calculatePrice (float money, int year)
{
    float total=0;
    int years = 18;
    for(int count = 1800; count <= year; count = count + 1)
    {
        if (count % 2 == 0 )
        {
            total = total+12000;
        }
        else
        {
            total = total + (12000+50*years);
        }
        years = years + 1;
    
    }
    return total;
    
}
