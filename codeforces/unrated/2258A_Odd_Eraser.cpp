#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin >> n;
    while (n > 0)
    {
        int a;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a ; i++)
        {
            cin >> arr[i];
        }
        int num1 = arr[0];
        int num2 = arr[a-1];
        while (num2 > 0)
        {
            int remainder = num1 % num2;
            num1 = num2;
            num2 = remainder;
        }
        cout << num1 << "\n";
        n -= 1;
    }
}