#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sz(x) ((long long)(x).size())
#define vl vector<ll>

#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_multiset;
// *s.find_by_order, *s.order_of_key --> O(logn)
void myerase(indexed_multiset &t, int v){
    int rank = t.order_of_key(v);
    indexed_multiset::iterator it = t.find_by_order(rank);
    t.erase(it);
}

ll n,k;
int ans;

void func(ll i,vl &a,indexed_multiset &s){
    if(i>=sz(a)) return;
    if(i==sz(a)-1)
    {
        s.insert(a[i]);
        ll n=sz(s);
        ans = max(ans,*s.find_by_order((n+1)/2 -1));
        myerase(s,a[i]);

        if(k==1){
            n=sz(s);
            ans = max(ans,*s.find_by_order((n+1)/2 -1));
        }
        return;
    }

    //choose cur
    s.insert(a[i]);
    func(i+1,a,s);
    myerase(s,a[i]);

    //choose after removing 
    func(i+k,a,s);
}

void solve()
{
    cin>>n>>k;
    vl a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    indexed_multiset s;
    func(0,a,s);
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    int T=1;
    // cin>>T;
    while(T--)
        solve();

    return 0;
}
