#include <iostream>
using namespace std;

main()
{
    int n1 = 0;
    int n2 = 1;
    int length;
    cout << "Enter length of series: "<< endl;
    cin >> length;
    for (int count = 0; count <= length; count = count + 1)
    {
        next = n1 + n2;
        cout << next << " ,";
        next = n1;
        n2 = n1;

    }
}