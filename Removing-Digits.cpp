#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1);
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = i + 1;
        set<int> digits;
        int temp = i;
        while (temp)
        {
            digits.insert(temp % 10);
            temp /= 10;
        }
        for (auto &x : digits)
        {
            dp[i] = min(dp[i], dp[i - x] + 1);
        }
    }
    cout << dp[n];
}