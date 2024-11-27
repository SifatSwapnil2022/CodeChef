#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Size of the array `arr`
        int m = n - 1;
        int brr[m];
        for (int i = 0; i < m; i++) {
            cin >> brr[i]; // Input elements of `brr`
        }

        // Sort the array `brr`
        sort(brr, brr + m);

        int arr[n];
        arr[0] = brr[0] / 2;       // Initialize the first element of `arr`
        arr[1] = brr[0] - arr[0]; // Initialize the second element of `arr`

        for (int i = 2; i < n; i++) {
            arr[i] = brr[i - 1] - arr[i - 1]; // Calculate the rest of the array
        }

        // Output the array
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

