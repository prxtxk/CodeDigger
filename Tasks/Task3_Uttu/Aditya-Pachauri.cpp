#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int>& a) {
    int n = a.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    vector<int> sorted_arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sorted_arr[i] = arr[i];
    }
    
    sort(arr);
    bool flag = true;
    
    for (int i = n - x; i < x; i++) {
        if (i >= 0 && i < n && sorted_arr[i] != arr[i]) {
            flag = false;
            break;
        }
    }
    
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

