#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Size of the array
        vector<int> arr(n); // Input array
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long count = 0; // Total count of non-decreasing subarrays
        long long current = 1; // Count of subarrays ending at the current index

        for (int i = 1; i < n; i++) {
            if (arr[i] >= arr[i - 1]) {
                current++; // Extend the previous subarray
            } else {
                current = 1; // Reset the count for the new starting subarray
            }
            count += current; // Add the count of subarrays ending at `i`
        }

        // Include the first subarray
        count += 1;

        cout << count << endl; // Output result for this test case
    }
    return 0;
}
