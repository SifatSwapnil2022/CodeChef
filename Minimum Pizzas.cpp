#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int N, X; // Number of friends and slices each friend needs
        cin >> N >> X;

        // Total slices needed
        int totalSlices = N * X;

        // Calculate minimum number of pizzas using integer division
        int pizzas = totalSlices / 4;
        if (totalSlices % 4 != 0) {
            pizzas++; // Add one more pizza if there's a remainder
        }

        // Output the result for the current test case
        cout << pizzas << endl;
    }

    return 0;
}
