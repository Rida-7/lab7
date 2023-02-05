#include <iostream>
using namespace std;

main()
{
    int n1 = 0;
    int n2 = 1;
    int next;
    int length;
    
    cout << "Enter length of series: ";
    cin >> length;
    cout << n1 << ", " << n2 ;
    for (int count = 1; count <= length - 2; count = count + 1)
    {
       
        next = n1 + n2;
        n1 = n2;
        n2 = next;
        cout << ", " << next;

    }
}