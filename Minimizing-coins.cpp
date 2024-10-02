#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    vector<int> dp(x + 1);
    dp[0] = 0;
    for (int i = 1; i <= x; i++)
    {
        dp[i] = 1e7;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > i)
                break;
            dp[i] = min(dp[i], dp[i - arr[j]] + 1);
        }
    }
    if (dp[x] > x)
        cout << -1;
    else
        cout << dp[x];
}