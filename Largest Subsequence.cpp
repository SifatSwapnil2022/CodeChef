#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string a;
        int n;
        cin >> n>>a;

        int maxCount = 0;
    

        for (int i = 0; i < n; i++) {
            if (a[i] == a[0]) {
                maxCount = max(maxCount, i + 1);
            }
            if (a[i] == a[n - 1]) {
                maxCount = max(maxCount, n - i);
            }
        }
        
        cout << maxCount << endl;
    }

    return 0;
}
