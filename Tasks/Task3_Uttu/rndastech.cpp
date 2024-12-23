#include <bits/stdc++.h>
using namespace std;
#define ain(arr, n)               \
    for (int i = 0; i < n; i++) { \
        cin >> arr[i];            \
    }
#define aout(arr, n)              \
    for (int i = 0; i < n; i++) { \
        cout << arr[i] << " ";    \
    }                             \
    cout << endl;
#define srt(arr, n) sort(arr, arr + n);
#define int long long
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        ain(arr, n);
        int b[n];
        for (int i = 0; i < n; i++) {
            b[i] = arr[i];
        }
        sort(b, b + n);
        bool fl = 1;
        for (int i = n - x; i < x; i++) {
            if (arr[i] != b[i]) {
                fl = 0;
                break;
            }
        }
        if (fl)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
