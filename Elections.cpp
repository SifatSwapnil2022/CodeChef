#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;
        ll a[n], b[n]; // assuming n will not exceed 1000

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        ll required_wins = (n + 1) / 2; // Majority threshold
        ll guaranteed_wins = 0;
        int extra_votes[100000000];
        int extra_count = 0;

        // Calculate initial wins and extra votes needed
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                guaranteed_wins++;
            } else {
                extra_votes[extra_count++] = b[i] - a[i] + 1;
            }
        }

        // If guaranteed wins already meet or exceed the majority requirement, print "yes"
        if (guaranteed_wins >= required_wins) {
            cout << "yes" << endl;
            continue;
        }

        // Sort extra votes needed to use the least amount of votes
        sort(extra_votes, extra_votes + extra_count);

        bool can_win = false;
        for (int i = 0; i < extra_count; i++) {
            if (x >= extra_votes[i]) {
                x -= extra_votes[i];
                guaranteed_wins++;
                if (guaranteed_wins >= required_wins) {
                    can_win = true;
                    break;
                }
            } else {
                break;
            }
        }

        if (can_win) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}
