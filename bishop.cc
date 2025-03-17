#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long h, w;
    cin >> h >> w;
    if (min(h, w) == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        //cout << (long long)(h * w / 2.0 + 0.5) << endl;
        cout << (w * h + 1) / 2 << endl;
    }
}