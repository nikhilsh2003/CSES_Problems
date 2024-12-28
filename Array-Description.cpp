#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<vector<long int>> dp(n + 1, vector<long int>(m + 1, 0));
    const long int mod = 1e9 + 7;
    for (int i = 0; i <= m; i++)
        dp[0][i] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (arr[i] != 0)
            {
            }
            if (j < m)
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1] + dp[i - 1][j]) % mod;
            else
                dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % mod;
        }
    }
    long int ans = 0;
    for (int i = 1; i <= m; i++)
        ans = (ans + dp[n][i]) % mod;
    cout << ans;
}