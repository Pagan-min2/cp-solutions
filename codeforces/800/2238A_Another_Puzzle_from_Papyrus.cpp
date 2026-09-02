#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        int a, c;
        cin >> a >> c;

        int arr1[a];
        int arr2[a];

        for (int i = 0; i < a; i++)
        {
            cin >> arr1[i];
        }

        for (int i = 0; i < a; i++)
        {
            cin >> arr2[i];
        }

        int sumorg = 0;
        bool f = true;
        for (int i = 0; i < a; i++)
        {
            if (arr1[i] < arr2[i])
            {
                f = false;
            }
            sumorg += (arr1[i] - arr2[i]);
        }

        sort(arr1, arr1 + a);
        sort(arr2, arr2 + a);

        int sum = c;
        bool t = true;
        for (int i = 0; i < a; i++)
        {
            if (arr1[i] < arr2[i])
            {
                t = false;
            }
            sum += (arr1[i] - arr2[i]);
        }

        if (!t)
        {
            cout << -1 << "\n";
        }
        else
        {
            if (sum > sumorg && f)
            {
                cout << sumorg << "\n";
            }
            else
            {
                cout << sum << "\n";
            }
        }
        n -= 1;
    }
}