#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define setbits(x)  __builtin_popcountll(x)

// Functions for taking input and printing arrays, vectors, and sets
void takeA(int a[], int n) { for(int i=0; i<n; i++) cin >> a[i]; }
void printA(int a[], int n) { for(int i=0; i<n; i++) cout << a[i] << " "; cout << endl; }
void takeB(vector<int> &a, int n) { for(int i=0; i<n; i++) cin >> a[i]; }
void printB(const vector<int> &a) { for(auto i : a) cout << i << " "; cout << endl; }
void takeA(set<int> &a, int n) { for(int i=0; i<n; i++) { int k; cin >> k; a.insert(k); } }
void printA(const set<int> &a) { for(auto i : a) cout << i << " "; cout << endl; }

int cost(vector<int>& a, int h) {
    int cost = 0;
    for(int i : a) {
        if(i > h) {
            cost += i-h; 
        } else {
            cost += 2*(h-i); 
        }
    }
    return cost;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    int low = 0, high = *max_element(a.begin(), b.end());
    int min_cost = LLONG_MAX;

    while(low <= high) {
        int mid = (low + high) / 2;

        int cost_mid = cost(A, mid);
        int cost_next = cost(A, mid + 1);

        min_cost = min(min_cost, cost_mid);

        if(cost_mid < cost_next) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << low << endl;

    cout << min_cost << endl;
}

signed main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
