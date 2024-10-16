#include <bits/stdc++.h>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int n; // Number of elements
        int k; // Some parameter
        cin >> n >> k; // Read both n and k
        
        vector<int> arr(n); // Use consistent vector name
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; // Read into arr
        }

        sort(arr.begin(), arr.end()); // Sort arr

        if (k == 1) {
            cout << 2 * arr[n - 1] + arr[0] + arr[n - 2] << endl;
        } else {
            int ans = arr[0] + arr[n - k - 1] + arr[n - 1] + arr[n - 2];
            cout << ans << endl;
        }
    }

    return 0;
}
