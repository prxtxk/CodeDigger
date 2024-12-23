//..........................................................................
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<pair<long long, long long>, null_type, less<pair<long long, long long>>, rb_tree_tag, tree_order_statistics_node_update> id_setpll;
typedef tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> id_setll;
//..........................................................................
// NOTE => for the indexed sets
// auto it = s.find_by_order(k);  => Get the k-th smallest element (0-indexed).

// Order of Key: Get the number of elements less than a given value.
// int rank = s.order_of_key({key, value}); // For id_setpll
// int rank2 = t.order_of_key(value); // For id_setll
//..........................................................................

// some short hands
//..........................................................................
#define ain(arr,n) for(int i = 0 ; i<n ; i++){ cin >> arr[i];}
#define aout(arr,n) for(int i = 0 ;i<n;i++){cout << arr[i]<<" ";}cout << endl;
#define srt(arr,n) sort(arr,arr+n);
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define yes cout << "yes" << endl;
#define no cout << "no" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define PI 3.141592653589793238462
#define int long long
#define sortv(v) sort(v.begin(),v.end());
#define all(v) v.begin(),v.end()
#define sz(v) (ll)v.size()
#define setuni(result, set1, set2) std::set_union((set1).begin(), (set1).end(), (set2).begin(), (set2).end(), inserter((result), (result).begin()));
#define MishiranuHito() auto begin = std::chrono::high_resolution_clock::now();ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//..........................................................................

const long long MAXN = 2e6;
const long long MOD = 1e9 + 7;

long long fac[MAXN + 1];
long long inv[MAXN + 1];


/*................................................................................................................................................*/

// SOME IMPORTANT FUNCTIONS

long long exp(long long x, long long n, long long m) {
    x %= m;
    long long res = 1;
    while (n > 0) {
        if (n % 2 == 1) { res = res * x % m; }
        x = x * x % m;
        n /= 2;
    }
    return res;
}

//..........................................................................

void factorial() {
    fac[0] = 1;
    for (long long i = 1; i <= MAXN; i++) { fac[i] = fac[i - 1] * i % MOD; }
}


//..........................................................................
void inverses() {
    inv[MAXN] = exp(fac[MAXN], MOD - 2, MOD);
    for (long long i = MAXN; i >= 1; i--) { inv[i - 1] = inv[i] * i % MOD; }
}

//..........................................................................

long long choose(long long n, long long r) { 
    if(r>n)return 0ll;
    return (fac[n] * inv[r] % MOD * inv[n - r] % MOD)%MOD; 
}

//..........................................................................

// SieveOfEratosthenes(FOR CHECKING PRIMES)
 bool prime[(long long)1e6 + 1];
 void SieveOfEratosthenes()
{
    long long n = 1e6;
    memset(prime, true, sizeof(prime));
    for (long long p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p
            for (long long i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

vector<ll> oprime;
void sieve()
{
    SieveOfEratosthenes();
    for (int i = 2 ;i<1e6+1; i++)
    {
        if (prime[i])
        {
            oprime.push_back(i);
        }
    }
}

//..........................................................................
// To find min element index
int minid(vector<ll> v, int s , int e)
{
    int mn = v[s];
    int id = s;
    for (int i = 0 ; i<=e ;i++)
    {
        if (mn>v[i])
        {
            id = i;
            mn = v[i];
        }
    }
    return id;
}
int minid(ll v[], int s , int e)
{
    int mn = v[s];
    int id = s;
    for (int i = 0 ; i<=e ;i++)
    {
        if (mn>v[i])
        {
            id = i;
            mn = v[i];
        }
    }
    return id;
}

//..........................................................................
// To find max element index
int maxid(vector<ll> v, int s , int e)
{
    int mx = v[s];
    int id = s;
    for (int i = 0 ; i<=e ;i++)
    {
        if (mx<v[i])
        {
            id = i;
            mx = v[i];
        }
    }
    return id;
}
int maxid(ll v[], int s , int e)
{
    int mx = v[s];
    int id = s;
    for (int i = 0 ; i<=e ;i++)
    {
        if (mx<v[i])
        {
            id = i;
            mx = v[i];
        }
    }
    return id;
}
//..........................................................................

// NUMBER TO BINARY
string bin(long long n, int q) {
    long long i;
    string s = "";

    // Loop from the most significant bit to the least significant bit
    for (i = 1LL << (q - 1); i > 0; i = i >> 1) {
        if ((n & i) != 0) {
            s.push_back('1');
        } else {
            s.push_back('0');
        }
    }
    return s;
}
//..........................................................................
  
  long long btll(string& binaryString) {
    long long result = 0;
    for (char bit : binaryString) {
        result <<= 1;
        if (bit == '1') {
            result |= 1;
        }
    }
    return result;
}
//..........................................................................
  
  // Function to calculate the Greatest Common Divisor (GCD)
ll gcd(ll a, ll b) {
    while (b) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
//..........................................................................

// Function to calculate the Least Common Multiple (LCM)
ll lcm(ll a, ll b) {
    return (a * b) / gcd(a, b);
}

//..........................................................................
map<long long, long long> gpf(long long n) {
    map<long long, long long> factors;
    for (long long p : oprime) {
        if (p * p > n) break; // No need to check beyond the square root of n
        int count = 0;
        while (n % p == 0) {
            n /= p;
            count++;
        }
        if (count > 0) {
            factors[p] = count;
        }
    }
    if (n > 1) { // n is a prime number greater than the largest element in oprime
        factors[n] = 1;
    }
    return factors;
}
//..........................................................................
class SGTree {
    public:
    vector<int> seg;

    // Constructor to initialize the segment tree with size 4*n+1
    SGTree(int n) {
        seg.resize(4 * n + 1);
    }

    // Function to build the segment tree
    void built(int ind, int low, int high, int arr[]) {
        if (low == high) {
            seg[ind] = arr[low];
            return;
        }
        int mid = (low + high) / 2;
        built(2 * ind + 1, low, mid, arr);
        built(2 * ind + 2, mid + 1, high, arr);
        seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
    }

    // Function to query the segment tree within a range [l, r]
    int quary(int ind, int low, int high, int l, int r) {
        // No overlap
        if (l > high || r < low) {
            return INT_MAX;
        }

        // Complete overlap
        if (low >= l && high <= r) {
            return seg[ind];
        }

        // Partial overlap (go left and right, then take the min of both)
        int mid = (low + high) / 2;
        int left = quary(2 * ind + 1, low, mid, l, r);
        int right = quary(2 * ind + 2, mid + 1, high, l, r);
        return min(left, right);
    }

    // Function to update the segment tree
    void update(int ind, int low, int high, int i, int val) {
        if (low == high) {
            seg[ind] = val;
            return;
        }
        int mid = (low + high) / 2;
        if (i <= mid) update(2 * ind + 1, low, mid, i, val);
        else update(2 * ind + 2, mid + 1, high, i, val);
        seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
    }
};
//..........................................................................


//..........................................................................
//...........................Jai Ma Durga...................................
//..........................................................................


void solve() {
    ll n , x;
    cin >> n >> x;
    vector<ll> v(n);
    ain(v,n);
    vector<ll> arr = v;
    sort(all(arr));
    for (int i = n-x ; i<x ; i++)
    {
        if (v[i]!=arr[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    
}


//..........................................................................
//..........................................................................
//..........................................................................
//..........................................................................

int32_t main() {
    // Jai Ma Durga
    sieve();
    //factorial();
    //inverses();
//     int t;
//     cin >> t;
// //    ll c = 1;
//     while (t-- > 0) {
//        cout << "Case #" << c++ <<": ";
        solve();
    // }
}