#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    vector<vector<bool>> dp(sum + 1, vector<bool>(n + 1, false));
    set<int> st;
    for (int i = 0; i <= n; i++)
        dp[0][i] = 1;
    for (int i = 1; i <= sum; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= arr[j - 1])
                dp[i][j] = dp[i - arr[j - 1]][j - 1] or dp[i][j - 1];
            else
                dp[i][j] = dp[i][j - 1];
        }
        if (dp[i][n])
            st.insert(i);
    }
    cout << st.size() << endl;
    for (auto &x : st)
        cout << x << " ";
}