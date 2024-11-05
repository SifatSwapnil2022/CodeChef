#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x_hrs;
        int y_friday_hrs;
        cin >> x_hrs >> y_friday_hrs;
        
        int total_working_hours = y_friday_hrs; // Start with initial working hours
        
        // Accumulate working hours (4 * x_hrs per day) until y_friday_hrs >= x_hrs
        while (y_friday_hrs < x_hrs) {
            total_working_hours += 4 * x_hrs;
            y_friday_hrs += 4 * x_hrs;
        }
        
        cout << total_working_hours << endl;
    }

    return 0;
}
