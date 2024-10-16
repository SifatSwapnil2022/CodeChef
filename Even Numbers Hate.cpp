#include <bits/stdc++.h>
using namespace std;

int main() {
    int testcases;
    cin >> testcases;

    while (testcases--) {
        int num; // Number of elements in the array
        cin >> num;

        int evens = 0; // Count of even numbers
        int odds = 0; // Count of odd numbers

        for (int i = 0; i < num; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0) {
                evens++;
            } else {
                odds++;
            }
        }

        int result = 0; // Initialize result
        if (odds > 0) {
            result = evens + (odds + 1) / 2; // Calculate the result if there are odd numbers
        }

        cout << result << endl; // Output the result
    }
    
    return 0;
}

