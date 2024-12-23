#include <bits/stdc++.h>
using namespace std;

int run(int a[],int b[],int i,int n){
    for(;i<n;i++){
        if(a[i]!=b[i])
            return 0;
    }
    return 1;
}

int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int b[n];
    for(int i=0;i<n;i++)
        b[i]=a[i];
    sort(b,b+n);

    int ans=1;
    if(x>=n)
        ans=run(a,b,0,n);
    else 
        ans=run(a,b,n-x,x);

    if(ans==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}