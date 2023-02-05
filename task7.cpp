#include <iostream>
using namespace std;
int calculateGCD(int num1, int num2);
int calculateLCM(int num1, int num2, int result1);

main()
{
    int num1, num2, result1, result2;
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;

    result1 = calculateGCD(num1, num2);
    cout << "Greatest Common Factor is: " << result1 << endl;
    result2 = calculateLCM(num1, num2, result1);
    cout << "Least Common Factor is: " << result2 << endl;

}
int calculateGCD(int num1, int num2)
{
    int count = 1;
    int gcd;
    while(count <= num1 && count <= num2)
    {
        if(num1 % count == 0 && num2 % count == 0)
        gcd = count;
        count = count + 1;
    
    }
    return gcd;
}

int calculateLCM(int num1, int num2, int result1)
{
    int lcm;
    lcm = (num1*num2) / result1 ;
    return lcm;
}