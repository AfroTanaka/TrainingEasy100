#include <bits/stdc++.h>
using namespace std;

int func(int a, int b, int c)
{
    if ((a % 2) || (b % 2) || (c % 2))
        return 0;
    if (a == b && b == c)
        return -1;
    return (func((b + c) / 2, (a + c) / 2, (a + b) / 2) + 1);
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = func(a, b, c);
    cout << ans << endl;
}