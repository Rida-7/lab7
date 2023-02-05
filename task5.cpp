#include <iostream>
using namespace std;
void printTable(int number);
main()
{
    int number, result;
    cout << "Enter Number: ";
    cin >> number;

    printTable(number);
}

void printTable(int number)
{
    for (int num = 1; num <= 10; num = num + 1)
    {
        int multiple;
        multiple = num*number;
        cout << number << "*" << num << "=" << multiple << endl;
    }
}