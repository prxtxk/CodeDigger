#include<bits/stdc++.h>
using namespace std;
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define ll long long
#define pb push_back
#define ff(i,s,e) for(int i=s;i<e;i++)
#define fb(i,e,s) for(int i=e;i>s;i--)
#define svec(x) sort(x.begin(),x.end())
#define mod 1000000007
#define maxvec(x) *max_element(x.begin(),x.end())
#define minvec(x) *min_element(x.begin(),x.end())
#define mset(v,m) memset(v,m,sizeof(m))

int main(){
  int n;int x;
  cin>>n>>x;
  vector<int>a(n);
  ff(i,0,n){
    cin>>a[i];
  }
  vector<int>a_sort=a;
  svec(a_sort);
  if(n<=x){
    ff(i,0,n){
        if(a[i]!=a_sort[i]){
            cout<<"NO";return 0;
        }
    }
  }
  else{
    ff(i,n-x,x){
        if(a[i]!=a_sort[i]){
            cout<<"NO";return 0;
        }

    }
  }
  cout<<"YES";
  return 0;

  
}
