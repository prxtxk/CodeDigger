#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pi = pair<int, int>;
using pl = pair<ll, ll>;
using pd = pair<ld, ld>;
using vi = vector<int>;
using vl = vector<ll>;
using vd = vector<ld>;
using vpi = vector<pi>;
using vpl = vector<pl>;
using vpd = vector<pd>;
using vvi = vector<vi>;

#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define f(i, a, b) for (int i = a; i < (b); ++i)
#define read(v) for(auto &it: v) cin>>it
#define nl "\n"
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define neg1 cout<<-1<<endl
#define fi first
#define s second
#define mod 1000000007

void solve()
{
    ll n,x;
    cin>>n>>x;
    vl v(n),w(n);
    f(i,0,n){
        cin>>v[i];
        w[i] = v[i];
    }
    sort(all(w));
    f(i,max(n-x,0LL),min(n,x)){
        if(v[i]!=w[i]){
            pn;
            return;
        }
    }
    py;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
