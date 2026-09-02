#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        int a,b;
        cin >> a >> b;
        int arr[a];
        bool q = true;
        bool p = true;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            if (i != 0 && arr[i] != arr[i-1])
            {
                q = false;
            }
            if (i!= 0 && arr[i] < arr[i-1])
            {
                p = false;
            }
        }
        if (p)
        {
            cout << "YES \n";
        }

        else if (b >=2 || q)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        n --;
    }
}