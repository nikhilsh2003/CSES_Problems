#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n <= 4)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    int i = 1, j = (n + 1) / 2 + 1;
    for (int x = 1; x <= n; x++)
    {
        if (x % 2)
            cout << i++ << " ";
        else
            cout << j++ << " ";
    }
}