#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double x;
    x = n / 1.08;
    if (floor(x) == x)
        cout << (int)(x) << endl;
    else
        cout << ":(" << endl;
}