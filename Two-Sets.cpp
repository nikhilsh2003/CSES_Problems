#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    cin >> n;
    if (n % 4 != 0 and (n + 1) % 4 != 0)
    {
        cout << "NO";
        return 0;
    }
    long int sum = (n * (n + 1)) / 4;
    vector<int> a, b;
    for (int i = n; i >= 1; i--)
    {
        if (sum >= i)
        {
            a.push_back(i);
            sum -= i;
        }
        else
            b.push_back(i);
    }
    cout << "YES" << endl;
    cout << a.size() << endl;
    for (auto x : a)
        cout << x << " ";
    cout << endl;
    cout << b.size() << endl;
    for (auto x : b)
        cout << x << " ";
}