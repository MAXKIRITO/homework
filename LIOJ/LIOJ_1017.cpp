#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_N = 1000;

int p[MAX_N];

int main()
{
    int c, n;
    cin >> c >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p, p + n, greater<int>());
    int ans = 0;
    for (int i = 0; i < c && i < n; i++)
    {
        ans += p[i];
    }
    cout << ans << endl;
    return 0;
}