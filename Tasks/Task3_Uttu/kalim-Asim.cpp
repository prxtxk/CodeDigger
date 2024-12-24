#include <bits/stdc++.h>
using namespace std;

#define MOD     1000000007
#define int     long long int
#define pb      push_back
#define MAX     LLONG_MAX
#define MIN     LLONG_MIN
#define vi      vector<int>
#define mii     map<int, int>
#define pii     pair<int, int>
#define no      cout << "NO\n"
#define yes     cout << "YES\n"
#define sz(x)   ((int)(x).size())
#define all(x)  (x).begin(), (x).end()
#define vin(a)  for(int i = 0; i < (a).size(); ++i) cin >> a[i];
#define vout(a) for(int i = 0; i < (a).size(); ++i) cout << a[i] << ' ';

void solve() {
    int n, x;
    cin >> n >> x;
    vi a(n);
    vin(a);
    vi v(a);
    sort(all(v));
    bool ans = 1;
    if (x >= n && !is_sorted(all(a))) 
        ans = 0;

    for(int i = n - x; i < x; i++)
        ans &= v[i] == a[i];
        
    if (ans) yes;
    else no;
}

signed main() {
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
