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
        int sum = 0;
        for (int i = 0; i < a-1; i++)
        {
            int temp;
            cin >> temp;
            sum += temp;
        }
        cout << -sum <<"\n";
        n--;
    }
}