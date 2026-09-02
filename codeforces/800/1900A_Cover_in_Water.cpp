#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n > 0)
    {
        string s;
        int k;
        cin >> k;
        cin >> s;
        bool a = true;
        bool z = true;
        int c = 0;int d = 0;int ans = 0;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == '.' && a)
            {
                c = i;
                a = false;
            }
            if (s[i] == '#' && !a)
            {
                d = i-1;
                a = true;
                if (d-c == 0 || d-c == 1)
                {
                    ans += d-c + 1;
                }
                else if (d-c > 1)
                {
                    ans = 2;
                    z =false;
                    break;
                }
            }
        }
        if (s[k-1] == '.' && z)
        {
            d = k-1;
            if (d-c == 0 || d-c == 1)
                {
                    ans += d-c + 1;
                }
            else if (d-c > 1)
                {
                    ans = 2;
                }
        }
        
        cout << ans << "\n";
        n--;
    }
}