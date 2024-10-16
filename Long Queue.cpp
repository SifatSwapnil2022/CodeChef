#include <bits/stdc++.h>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases; // Read the number of test cases

    while (test_cases--) {
        int n;
        cin >> n;

        vector<int> array(n); // Use a vector for dynamic sizing
        for (int i = 0; i < n; i++) {
            cin >> array[i]; // Input the elements of the array
        }

        int sushil_wealth = array[n - 1]; // Sushil's wealth
        int pos = n; // Start with all elements

        // Find the first position where the condition fails
        for (int i = n - 2; i >= 0; i--) {
            if (array[i] > sushil_wealth / 2) {
                break; // Stop if the condition is met
            }
            pos--; // Decrement the position count
        }

        cout << pos << endl; // Output the result
    }

    return 0;
}
