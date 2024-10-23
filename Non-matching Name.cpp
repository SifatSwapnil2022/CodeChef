#include <stdio.h>
#include <string.h>

int main() {
    int test_cases;
    scanf("%d", &test_cases);

    while (test_cases--) {
        int n, m;
        scanf("%d %d", &n, &m);
        
        char SA[101], SB[101];
        scanf("%s %s", SA, SB);

        int a[26] = {0}, b[26] = {0};
        
        // Mark characters present in SA
        for (int i = 0; i < n; i++) {
            a[SA[i] - 'a'] = 1;
        }
        
        // Mark characters present in SB
        for (int i = 0; i < m; i++) {
            b[SB[i] - 'a'] = 1;
        }
        
        // Check for a character not in either string
        int found = 0;
        for (int i = 0; i < 26; i++) {
            if (!a[i] && !b[i]) {
                found = 1;
                break;
            }
        }

        printf("%s\n", found ? "YES" : "NO");
    }
    
    return 0;
}
