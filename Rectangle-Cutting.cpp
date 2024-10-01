#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b, vector<vector<int>> &dp)
{
    if (a == b)
        return dp[a][b] = 0;
    if (a < b)
        swap(a, b);
    if (dp[a][b] != -1)
        return dp[a][b];
    dp[a][b] = a * b;
    for (int i = 1; i < a; i++)
        dp[a][b] = min(dp[a][b], 1 + solve(a - i, b, dp) + solve(i, b, dp));
    for (int i = 1; i < b; i++)
        dp[a][b] = min(dp[a][b], 1 + solve(a, b - i, dp) + solve(a, i, dp));
    // dp[b][a] = dp[a][b];
    return dp[a][b];
}

int main()
{
    int a, b;
    cin >> a >> b;
    if (a < b)
        swap(a, b);
    vector<vector<int>> dp(a + 1, vector<int>(b + 1, -1));
    cout << solve(a, b, dp);
}