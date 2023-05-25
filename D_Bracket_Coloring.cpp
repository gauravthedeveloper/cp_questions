#pragma region region1
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
using namespace std;

#define ff first
#define ss second
#define int long long
#define double long double
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pic pair<int, char>
#define pci pair<char, int>
#define vi vector<int>
#define vc vector<char>
#define li list<int>
#define vvi vector<vector<int>>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
#define upper(s1) transform(s1.begin(), s1.end(), s1.begin(), ::toupper)
#define lower(s1) transform(s1.begin(), s1.end(), s1.begin(), ::tolower)
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000000
#define MOD 1000000007
#define inf 1e9
#define minf -1e9
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)                                                           \
    int i_am_naming_this_badly_so_that_i_dont_use_it_accidentally = 1; \
    cin >> i_am_naming_this_badly_so_that_i_dont_use_it_accidentally;  \
    i_am_naming_this_badly_so_that_i_dont_use_it_accidentally--;       \
    while (i_am_naming_this_badly_so_that_i_dont_use_it_accidentally--)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count_bracket_unclosed = 0;
    bool flag1 = false;
    bool flag2 = true;
    bool flag3 = false;
    bool flag4 = false;

    fl(n)
    {
        if (s[i] == '(')
            count_bracket_unclosed++;
        else
            count_bracket_unclosed--;
    }
    if (count_bracket_unclosed != 0)
    {
        cout << "-1" << endl;
        return;
    }
    int pointer1 = 0;
    int pointer2 = 0;
    fl(n)
    {
        if (s[i] == '(')
            pointer2++;
        else
            pointer2--;
        if (pointer2 < 0)

        {
            pointer1++;
            flag1 = true;
            break;
        }
    }
    pointer2 = 0;
    fl(n)
    {
        if (s[i] == ')')
            pointer2++;
        else
            pointer2--;
        if (pointer2 < 0)

        {
            flag2 = true;
            pointer1++;
            break;
        }
    }
    if (pointer1 < 2 && flag4 == false)
    {
        cout << "1" << endl;
        flag3 = false;
        while (n--)
            cout << "1 ";
        cout << endl;
    }
    else
    {
        vi maybe_not_so_smart(n);
        int low = 0;
        int high = n - 1;
        while (low < high)
        {
            if (s[low] == ')' && s[high] == ')')
            {
                maybe_not_so_smart[low++] = 2;
                maybe_not_so_smart[high--] = 1;
            }
            else if (s[low] == '(' && s[high] == '(')
            {
                maybe_not_so_smart[low++] = 1;
                maybe_not_so_smart[high--] = 2;
            }
            else if (s[low] == ')' && s[high] == '(')
            {
                maybe_not_so_smart[high--] = 2;
                maybe_not_so_smart[low++] = 2;
            }
            else
            {
                maybe_not_so_smart[low++] = 1;
                maybe_not_so_smart[high--] = 1;
            }
        }
        cout << "2" << endl;
        fl(n)
                cout
            << maybe_not_so_smart[i] << " ";
        cout << endl;
    }
}
#pragma region region2
signed main()
{
    sectumsempra07();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
#pragma endregion region2
