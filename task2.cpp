#include <iostream>
using namespace std;

int totalDigits(int num);
main()
{
    int num, result;
    cout << "Enter Number: ";
    cin >> num;

    result = totalDigits(num);
    cout << "Total Digits are: "<< result;

}

int totalDigits (int num)
{
    int count = 0;
    while(num > 0)
    {
        num = num / 10;
        count = count + 1;
    }
    return count;
}