#include <bits/stdc++.h>
using namespace std;

void toh(int n, string source, string use, string target, vector<string> &ans)
{
    if (n == 1)
    {
        ans.push_back(source + " " + target);
        return;
    }
    toh(n - 1, source, target, use, ans);
    ans.push_back(source + " " + target);
    toh(n - 1, use, source, target, ans);
}

int main()
{
    int n;
    cin >> n;
    vector<string> ans;
    toh(n, "1", "2", "3", ans);
    cout << ans.size() << endl;
    for (auto &x : ans)
        cout << x << endl;
}