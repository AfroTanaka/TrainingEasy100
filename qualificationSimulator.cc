#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    string s;
    cin >> n >> a >> b >> s;
    int sum = 0;
    int b_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' && sum < a + b)
        {
            cout << "Yes" << endl;
            sum++;
        }
        else if (s[i] == 'b' && b_sum < b && sum < a + b)
        {
            cout << "Yes" << endl;
            b_sum++;
            sum++;
        }
        else
            cout << "No" << endl;
    }
}