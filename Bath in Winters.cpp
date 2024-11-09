#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        cout << (X / (Y * 2)) << endl;
    }

    return 0;
}
