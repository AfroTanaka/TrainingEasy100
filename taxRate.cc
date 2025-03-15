#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int tmp = i * 1.08;
        if (tmp == n)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << ":(" << endl;
}