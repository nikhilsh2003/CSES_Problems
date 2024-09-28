#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        long long ans;
        cin >> y >> x;
        if (y >= x)
        {
            if (y % 2)
            {
                y -= 1ll;
                ans = y * y + x;
            }
            else
            {
                ans = y * y - x + 1ll;
            }
        }
        else
        {
            if (x % 2)
            {
                ans = x * x - y + 1ll;
            }
            else
            {
                x -= 1;
                ans = x * x + y;
            }
        }
        cout << ans << endl;
    }
}