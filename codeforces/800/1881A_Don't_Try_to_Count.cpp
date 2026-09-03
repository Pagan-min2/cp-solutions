#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        int a,b;
        cin >> a >> b;
        string s1,s2;
        cin >> s1 >> s2;
        bool ans = false;
        for (int i = 0; i < 6; i++)
        {
            size_t found = s1.find(s2);
            if (found != string::npos)
            {
                cout << i << "\n";
                ans = true;
                break;
            }
            else
            {
                s1 = s1 + s1;
            }
        }
        if (!ans)
        {
            cout << -1 << "\n";
        }
        n--;
    }
}