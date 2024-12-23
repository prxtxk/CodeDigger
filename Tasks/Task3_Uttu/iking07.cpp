#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
#define int long long int
#define pb push_back
#define eb emplace_back
#define db long double
#define f first 
#define s second
#define vi vector<int> 
#define vp vector<pii>
#define vc vector<char>
#define str string
#define vb vector<bool> 
#define vvi vector<vector<int>> 
#define vvs vector<vector<str>>
#define vvb vector<vector<bool>> 
#define vvp vector<vector<pii>>
#define vvc vector<vector<char>>
#define vs vector<string>
#define vvvi vector<vector<vector<int>>>
#define fr(i,a,b) for(int i=a;i<=b;i++)
#define frr(i,a,b) for(int i=a;i>=b;i--)
#define frs(i,a,b,k) for(int i=a;i<=b;i+=k)
#define frrs(i,a,b,k) for(int i=a;i>=b;i-=k)
#define rs(a,b) resize(a,b)
#define b() begin()
#define e() end()
#define INF 1e18
const int mod=1e9+7;
const int N=10;

int n,x;
vi a,b;

void main1(){
    // your code goes here 
    cin>>n>>x;
    a.rs(n,0),b.rs(n,0);
    fr(i,0,n-1){
        cin>>a[i];
    }
    fr(i,0,n-1) b[i]=a[i];
    sort(b.b(), b.e());

    int z=max(n-x,0LL);
    int y=min(x,n);
    int flg=0;
    fr(i,z,y-1){
        if(a[i]==b[i]) continue;
        else{
            flg=1;
            break;
        }
    }

    if(flg){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }

    a.rs(0,0);
    b.rs(0,0);
}

int32_t main(){

    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);

    int t=1;
    // cin>>t;
    for(int i=1;i<=t;i++){
        main1();
    }

   return 0;
}