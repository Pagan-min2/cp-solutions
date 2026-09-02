#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        int a,b,sum;
        cin >> a >> b;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            if (i == 0)
            {
                sum = arr[0];
            }
            if (i != 0)
            {
                if (sum < arr[i] - arr[i-1])
                {
                    sum = arr[i] - arr[i-1];
                }
            }
        }
        if (sum < 2*(b - arr[a-1]))
        {
            sum = 2*(b - arr[a-1]);
        }
        cout << sum<< "\n";
        n--;
    }
}