#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    //cout << ((b - 1) / (a - 1)) + ((b - 1) % (a - 1)) << endl;
    cout << ((b - 1) + (a - 1) - 1) / (a - 1) << endl;
}