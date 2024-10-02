#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<long int> dp(x + 1, 0);
    dp[0] = 1;
    const int mod = 1e9 + 7;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (arr[i] > j)
                continue;
            dp[j] += dp[j - arr[i]] % mod;
        }
    }
    cout << dp[x] % mod;
}