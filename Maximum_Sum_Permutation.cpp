#include <bits/stdc++.h>
using namespace std;
#define fl(n) for (int i = 0; i < n; i++)
#define ll long long
#define pb push_back

ll m = 1e9 + 7;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {

        ll n, q, x, y;
        cin >> n >> q;

        ll a[n];
        fl(n) cin >> a[i];

        sort(a, a + n);
        ll b[n + 1];
        fl(n + 1) b[i] = 0;
        while (q--)
        {

            cin >> x >> y;
            b[x - 1] += 1;
            b[y] -= 1;
        }

        fl(n + 1)
        {
            if (i)
                b[i] += b[i - 1];
        }

        vector<pair<int, int>> v, vv;
        fl(n)
        {
            v.pb({b[i], i});
        }
        sort(v.rbegin(), v.rend());

        ll p = n - 1, result = 0;
        for (auto it : v)
        {
            result += (it.first * a[p]);
            vv.pb({it.second, a[p--]});
        }

        cout << result << "\n";
        sort(vv.begin(), vv.end());
        for (auto it : vv)
        {
            cout << it.second << " ";
        }
        cout << "\n";
    }
    return 0;
}