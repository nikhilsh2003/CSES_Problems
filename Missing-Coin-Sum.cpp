#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    long int curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > curr + 1)
        {
            cout << curr + 1;
            return 0;
        }
        curr += arr[i];
    }
    cout << curr + 1;
}