#include <iostream>
using namespace std;
void printPercentage(int n);

main()
{
    int n, result;
    cout << "Enter n: ";
    cin >> n;
   
    printPercentage(n);
}

void printPercentage(int n)
{
    int count = 0;
    int num;
    float p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
   
    while(count < n)
    {
        cout << "Enter number: ";
        cin >> num;
        count = count + 1;
        if (num < 200)
        {
            p1 = p1 + 1;
        }
        if (num >= 200 && num <= 399)
        {
            p2 = p2 + 1;
        }
        if (num > 399 && num <= 599)
        {
            p3 = p3 + 1;
        }
        if (num > 599 && num <= 799)
        {
            p4 = p4 + 1;
        }
        if (num > 799)
        {
            p5 = p5 + 1;
        }
    }
    p1 = (p1*100)/n;
    p2 = (p2*100)/n;
    p3 = (p3*100)/n;
    p4 = (p4*100)/n;
    p5 = (p5*100)/n;
    cout << p1 << "%" << endl;
    cout << p2 << "%" << endl;
    cout << p3 << "%" << endl;
    cout << p4 << "%" << endl;
    cout << p5 << "%" << endl;
}