#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n>0)
    {
        int arr[2];
        cin >> arr[0];
        cin >> arr[1];
        if(arr[0]%2!= 0&& arr[1]%2!=0)
        {
            cout<< "NO";
        }
        else
        {
            cout<<"YES";
        }
        n-=1;
    }    return 0;
}