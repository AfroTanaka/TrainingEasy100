#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, c;
    cin >> n >> m >> c;
    vector<int> B(m);
    vector<vector<int>> A(n, vector<int>(m));
    for (int i = 0; i < m; i++)
        cin >> B[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> A[i][j];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int col_sum = 0;
        for (int j = 0; j < m; j++)
        {
            col_sum += A[i][j] * B[j];
        }
        col_sum += c;
        if (col_sum > 0)
            sum++;
    }
    cout << sum << endl;
}