#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        int a;
        cin >> a;
        for (int i = a; i > 0; i--)
        {
            cout << i << " ";
        }
        cout << "\n";
        n--;
    }
}