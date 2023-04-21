#pragma region region1
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff first
#define ss second
// #define int long long
#define double long double
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define li list<int>
#define vvi vector<vector<int>>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000000
#define MOD 1000000007
#define inf 1e9
#define minf -1e9
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define upperCase(s1) transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
#define lowerCase(s1) transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
string getString(char x)
{
    string s(1, x);
    return s;
}
int lcm(int x, int y)
{
    return (x * y) / __gcd(x, y);
}
void sectumsempra07()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("Files/input.txt", "r", stdin);
    //     freopen("Files/output.txt", "w", stdout);
    // #endif
}
vi fib(int kk)
{
    vi v(kk + 1);
    v[0] = v[1] = 1;
    for (int i = 2; i < kk + 1; i++)
    {
        v[i] = v[i - 1] + v[i - 2];
    }

    return v;
}

#pragma endregion region1;
void solve()
{
    string s;
    cin >> s;
    int count = 0;
    fl(s.length())
    {
        count = (count * 10 + (s[i] - '0')) % 20;
    }
    cout << count << endl;
}
#pragma region region2
signed main()
{
    // sectumsempra07();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
#pragma endregion region2
