#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxNum = -1;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxNum = max(maxNum, arr[i]);
    }
    vector<int> count(maxNum + 1, 0);
    for (auto &x : arr)
        count[x]++;
    for (int i = maxNum; i >= 1; i--)
    {
        int ct = 0;
        for (int j = i; j <= maxNum; j += i)
        {
            ct += count[j];
            if (ct >= 2)
            {
                cout << i << endl;
                return 0;
            }
        }
    }
}