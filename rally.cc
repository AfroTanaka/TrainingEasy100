#include <bits/stdc++.h>
using namespace std;

int seed_sum(const vector<int>& seed, const int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += seed[i];
    }
    return sum;
}

int calculate_stamina_cost(const int base, const vector<int>& seed, const int n)
{
    int sum_stamina_cost = 0;
    for (int i = 0; i < n; i++)
    {
        sum_stamina_cost += (seed[i] - base) * (seed[i] - base);
    }
    return sum_stamina_cost;
}

int main()
{
    int n;
    cin >> n;
    vector<int> people_location(n);
    for (int i = 0; i < n; i++)
        cin >> people_location[i];
    int r_up, r_down;
    r_up = seed_sum(people_location, n) / (double)n + 0.5;
    r_down = seed_sum(people_location, n) / n;
    int r_up_cost, r_down_cost;
    r_up_cost = calculate_stamina_cost(r_up, people_location, n);
    r_down_cost = calculate_stamina_cost(r_down, people_location, n);
    cout << min(r_up_cost, r_down_cost) << endl;
}