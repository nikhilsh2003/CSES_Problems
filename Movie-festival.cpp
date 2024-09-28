#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(2));
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    sort(arr.begin(), arr.end());
    int ans = 0;
    int last = -1;
    for (int i = 0; i < n; i++)
    {
        if (last <= arr[i][0])
        {
            ans++;
            last = arr[i][1];
        }
        last = min(last, arr[i][1]);
    }
    cout << ans;
}