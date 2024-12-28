#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    cin >> n;
    long int sum = 0;
    const long int mod = 1e9 + 7;
    for (long int i = 1; i * i <= n; i++)
    {
        if ((i * i) == n)
            sum = (sum + i) % mod;
        else
            sum = (sum + n / i + i) % mod;
    }
    cout << sum;
}