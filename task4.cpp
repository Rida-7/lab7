#include <iostream>
using namespace std;
int digitSum(int num);
main()
{
    int num, result;
    cout << "Enter Number: ";
    cin >> num;

    result = digitSum(num);
    cout << "Sum of digits: " << result;

}

int digitSum (int num)
{
    int rem;
    int sum = 0;
    while(num > 0)
    {
        rem = num % 10;
        num = num / 10;
        sum = sum +rem;
    }
    return sum;
}