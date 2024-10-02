#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // sort(arr.begin(), arr.end());
    vector<long int> dp(x + 1, 0);
    long int mod = 1e9 + 7;
    dp[0] = 1;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < arr[j])
                continue;
            dp[i] += dp[i - arr[j]] % mod;
        }
    }
    cout << dp[x] % mod;
}