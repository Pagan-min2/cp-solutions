#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n)
    {
        int a;
        cin >> a;
        long long int arr[a];
        if (a == 1)
        {
            arr[0] = 1;            
        }
        else if (a == 2)
        {
            arr[1] = 2;    
        }
        
        arr[0] = 1;
        arr[1] = 2;
        arr[2] = 3;
        for (int i = 3;i < a; i++)
        {
            arr[i] = 2*arr[i-1];
        }

        if (a == 2)
        {
            cout << -1 ; 
        }
        else
        {
        for (int i = 0; i < a; i++)
        {
            cout << arr[i] << " ";
        }
        }
        n -= 1;
        cout << "\n";
    }
}