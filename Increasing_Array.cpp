#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<int> st;
    long long ans = 0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    st.push(0);
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() and arr[st.top()] <= arr[i])
            st.pop();
        if (!st.empty())
        {
            ans += arr[st.top()] - arr[i];
            arr[i] = arr[st.top()];
        }
        st.push(i);
    }
    cout << ans;
}