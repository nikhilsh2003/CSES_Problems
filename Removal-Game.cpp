#include <bits/stdc++.h>
using namespace std;

long int solve(int i, int j, vector<int> &arr, vector<vector<long int>> &dp, long int sum)
{
    int n = arr.size();
    if (i >= n or j < 0)
        return 0;
    if (i > j)
        return dp[i][j] = 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    dp[i][j] = max(sum - solve(i + 1, j, arr, dp, sum - arr[i]), sum - solve(i, j - 1, arr, dp, sum - arr[j]));
    return dp[i][j];
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<vector<long int>> dp(n, vector<long int>(n, -1));
    long int sum = 0;
    for (auto &x : arr)
        sum += x;
    cout << solve(0, n - 1, arr, dp, sum);
}