#include<bits/stdc++.h>
using namespace std;
 long long int exp(long long int x, long long int n) {
     long long int res = 1;
     while (n > 0) {
         if (n % 2 == 1) { res = res * x; }
         x = x * x;
         n /= 2;}
     return res;}
 bool cmp(char f, char s){
    char arr[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    long long int p1, p2;
    for(long long int i = 0; i<16;i++){
        if(f==arr[i])
        p1 = i;
        if(s==arr[i])
        p2 = i;}
    return (p1>=p2);}
 long long int hexint(string s, long long int n){
    long long int ans = 0;
    for(long long int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='F'){
            ans+= (s[i]-'A'+10)*exp(16, n-1-i);}
        if(s[i]>='0' && s[i]<='9'){
            ans+= (s[i]-'0')*exp(16, n-1-i);}}
        return ans;
 }
 int main() {
     ios_base::sync_with_stdio(false); 
     cin.tie(NULL);
     cout.tie(NULL);
     long long int t;
     cin>>t;
     while(t--){
        string xs;
        cin>>xs;
        if(xs=="0"){
            cout<<"NO"<<endl;}
            else{
        string maxxs = xs;
        sort(maxxs.begin(), maxxs.end(), cmp);
        string minxs = maxxs;
        reverse(minxs.begin(), minxs.end());
        if(minxs[0]=='0'){
            long long int p1 = 0;
            for(long long int i=0;i<minxs.size();i++){
                if(minxs[i]!='0'){
                    p1=i;
                    break;}}
            minxs[0] = minxs[p1];
            minxs[p1] = '0';}
        long long int x = hexint(xs, xs.size());
        long long int maxx = hexint(maxxs, maxxs.size());
        long long int minx = hexint(minxs, minxs.size());
        if(maxx - x > x - minx)
        cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
     }}
     return 0;
}
