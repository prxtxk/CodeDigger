/*


 .----------------.  .----------------. 
| .--------------. || .--------------. |
| |  ___  ____   | || | ____    ____ | |
| | |_  ||_  _|  | || ||_   \  /   _|| |
| |   | |_/ /    | || |  |   \/   |  | |
| |   |  __'.    | || |  | |\  /| |  | |
| |  _| |  \ \_  | || | _| |_\/_| |_ | |
| | |____||____| | || ||_____||_____|| |
| |              | || |              | |
| '--------------' || '--------------' |
 '----------------'  '----------------' 


*/


#include <bits/stdc++.h>
// #include <sys/resource.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace chrono;
// using namespace __gnu_pbds;


//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define km cout.tie(NULL);

//Aliases
using ll= long long;
using lld= long double;
using ull= unsigned long long;

//TypeDEf
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll,ll> umll;
typedef map<ll,ll> mll;

// Macros
#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,m,n) for(int i=n;i>=m;i--)
#define py cout<<"YES\n";
#define pm cout<<"-1\n";
#define pn cout<<"NO\n";
#define all(v) v.begin(),v.end()

//Code by Krishna Mohan
//Language C++
//Practice->Success

//Code
void solve()
{
    ll n,x;
    cin>>n>>x;
    vll v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    vll srtd = v;
    sort(all(srtd));
    for(int i=max((n-x),0ll); i<min(n,x); i++){
        if(v[i]!=srtd[i]){
            pn;
            return;
        }
    }
    py;
}
//Main
int main()
{
    Code By km
    ll t = 1;
    // cin>>t;
    fl(i,t)
    {
        solve();
    }
    // solve();
    // fl(i,t) //Kickstart
    // {
    //     cout<<"Case #"<<i+1<<": ";
    //     solve();
    //     cout<<"\n";
    // }
    return 0;
}
//End