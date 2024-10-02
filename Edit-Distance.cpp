#include <bits/stdc++.h>
using namespace std;

int solve(string &a, string &b, int i, int j, vector<vector<int>> &dp)
{
    if (dp[i][j] != -1)
        return dp[i][j];
    if (i == 0 or j == 0)
        return dp[i][j] = i + j;
    if (a[i - 1] == b[j - 1])
        return dp[i][j] = min(solve(a, b, i - 1, j - 1, dp), 1 + min(solve(a, b, i - 1, j, dp), solve(a, b, i, j - 1, dp)));
    else
        return dp[i][j] = min(1 + solve(a, b, i - 1, j - 1, dp), 1 + min(solve(a, b, i - 1, j, dp), solve(a, b, i, j - 1, dp)));
}

int main()
{
    string a, b;
    cin >> a >> b;
    int n = a.length(), m = b.length();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    cout << solve(a, b, n, m, dp);
}