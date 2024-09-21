#include <bits/stdc++.h>
using namespace std;
 
#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()
 
const int mod = 1e9 + 7;
const int inf = 1e9;
 
bool solve()
{
    int n, m, i, start, end, ans = INT_MIN;
    cin >> n >> m;
 
    string line;
    while (n--)
    {
        cin >> line;
        for (i = 0; i < m; i++)
        {
            if (line[i] == '#')
                break;
        }
        start = i;
        for (; i < m; i++)
        {
            if (line[i] == '.')
                break;
        }
        end = i;
 
        ans = max(ans, end - start);
    }
 
    cout << ans << ed;
 
    return true;
}
 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
        solve();
 
    return 0;
}
// github.com/shihab4t (Shihab Mahamud)
// Tuesday, August 16, 2022 | 06:54:49 PM (+06)