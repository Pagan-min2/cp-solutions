#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        int a, b;
        cin >> a >> b;

        int x[a];
        int y[b];

        int sum1 = 0, sum2 = 0;

        for (int i = 0; i < a; i++)
        {   
            cin >> x[i];
        }

        for (int i = 0; i < a - 1; i++)
        {
            sum1 += abs(x[i+1] - x[i]) + 1;
            if (i == a-2)
            {
                sum1 += x[a-1];
            }
            
        }

        for (int i = 0; i < b; i++)
        {
            cin >> y[i];
        }

        for (int i = 0; i < b - 1; i++)
        {
            sum2 += abs(y[i+1] - y[i]) + 1;
            if (i == b-2)
            {
                sum2 += y[b-1];
            }
        }
        if (a == 1)
        {
            sum1 = x[0];
        }
        if (b == 1)
        {
            sum2 = y[0];
        }
        

        if (sum1 >= sum2)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 2 << "\n";
        }
        n -= 1;
    }
}