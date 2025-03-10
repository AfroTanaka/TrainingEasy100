#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a == b && b == c) && (a % 2 == 0) && (b % 2 == 0) && (c % 2) == 0)
    {
        cout << -1 << endl;
        return 0;
    }
    int sum = 0;
    while (1)
    {
        if ((a % 2) || (b % 2) || (c % 2))
        {
            cout << sum << endl;
            break;
        }
        else
        {
            int a_sub, b_sub, c_sub;
            a_sub = b / 2 + c / 2;
            b_sub = a / 2 + c / 2;
            c_sub = a / 2 + b / 2;
            a = a_sub;
            b = b_sub;
            c = c_sub;
        }
        sum++;
    }
}