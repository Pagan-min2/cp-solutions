#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        int a;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        if (arr[0] == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        n--;
    }
}