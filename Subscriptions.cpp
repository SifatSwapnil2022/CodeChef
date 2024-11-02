#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int N, X; // N: number of friends, X: cost of one subscription
        cin >> N >> X;
        
        // Calculate the number of subscriptions needed
        int subscriptions_needed = (N + 5) / 6;
        
        // Calculate total cost
        int total_cost = subscriptions_needed * X;
        
        // Output the total cost
        cout << total_cost << endl;
    }
    
    return 0;
}
