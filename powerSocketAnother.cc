#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int sum = 1;
    int i = 0;
    while (1)
    {
        if (sum >= b)
        {
            cout << i << endl;
            return (0);
        }
        sum += (a - 1);
        i++;
    }
}