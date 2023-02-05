#include <iostream>
using namespace std;

int frequencyChecker(int num, int digit);
main()
{
    int num, digit, result;
    cout << "Enter Number: ";
    cin >> num;
    cout << "Enter Digit: ";
    cin >> digit;
    result = frequencyChecker(num, digit);
    cout << "Number of digits: " << result;

}

int frequencyChecker(int num, int digit)
{
    int rem;
    int count = 0;
    while(num > 0)
    {
        rem = num % 10;
        num = num / 10;
        if (rem == digit)
        {
            count = count + 1;
        }
    }
    return count;
}