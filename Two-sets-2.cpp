#include <bits/stdc++.h>
using namespace std;

int solve(int sum, int pos, vector<vector<long int>> &dp)
{
    if (sum == 0)
        return 1;
    if (pos == 0)
        return 0;
    if (dp[sum][pos] != -1)
        return dp[sum][pos];
    const long int mod = 1e9 + 7;
    if (sum >= pos)
        dp[sum][pos] = (solve(sum - pos, pos - 1, dp) + solve(sum, pos - 1, dp)) % mod;
    else
        dp[sum][pos] = solve(sum, pos - 1, dp) % mod;
    return dp[sum][pos];
}

int main()
{
    int n;
    cin >> n;
    if (n % 4 != 0 and (n + 1) % 4 != 0)
    {
        cout << 0;
        return 0;
    }
    const long int mod = 1e9 + 7;
    vector<vector<long int>> dp((n * (n + 1)) / 4 + 1, vector<long int>(n + 1, -1));
    cout << (solve((n * (n + 1)) / 4, n - 1, dp)) % mod;
}