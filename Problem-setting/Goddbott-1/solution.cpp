#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
      int m,n;
      cin>>m>>n;
      int x1,y1,x2,y2;
      cin>>x1>>y1>>x2>>y2;
      int a= x2-x1;
      int b= y2-y1;
      if (a<0 || b<0 || a>b){
        cout<<-1<<endl;
        continue;
      }
      else if (a==b){
        cout<<a<<endl;
      }
      else if (b>a){
        cout<<a+(y2-(y1+a))<<endl;
      }
    }
}
