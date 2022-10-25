#include <iostream>
#include <iomanip>
using namespace std;
void pattern(int n, int i)
{
    if (n == 1)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        cout << "*" << endl;
        return;
    }
    pattern(n/2, i);
    for (int k = 0; k < i; k++)
    {
        cout << " ";
    }
    for (int j = 0; j < n; j++)
    {
        cout << "*";
    }
    cout << endl;
    pattern(n/2, (i+n/2));
}
int main ()
{
    pattern(8, 0);
}