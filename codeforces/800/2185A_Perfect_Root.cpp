#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        int x;
        cin >> x;
        for (int j = 1; j <= x; j++)
        {
            cout << j << " ";
        }
    }
}