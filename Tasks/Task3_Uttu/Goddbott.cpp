#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
  int n,x;
  cin>>n>>x;
  vector <int> v;
  for (int i=0; i<n; i++){
    int temp;
    cin>>temp;
    v.push_back(temp);
  }
  vector <int> v1=v;
  sort(v1.begin(), v1.end());
  int k=1;
  for (int i=n-x; i<x; i++){
    if (v1[i]!=v[i]){
      x=0;
      break;
    }
  }
  if (x==0){
    cout<<"NO"<<endl;
  }
  else{
    cout<<"YES"<<endl;
  }
}
