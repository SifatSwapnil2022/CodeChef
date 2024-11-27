#include <bits/stdc++.h>
using namespace std;

bool dfs(int node, vector<vector<int>> &graph, vector<int> &same, vector<bool> &visited) {
    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            visited[neighbor] = true;
            if (same[neighbor] == -1 || dfs(same[neighbor], graph, same, visited)) {
                same[neighbor] = node;
                return true;
            }
        }
    }
    return false;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (k == 1) {
            cout << -1 << endl;
            continue;
        }

        // Create the graph
        vector<vector<int>> graph(n + 1);
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i % k != j % k) {
                    graph[i].push_back(j);
                }
            }
        }

        // Initialize the `same` array
        vector<int> same(n + 1, -1);
        for (int i = 1; i <= n; i++) {
            vector<bool> visited(n + 1, false);
            dfs(i, graph, same, visited);
        }

        // Build the result
        vector<int> result(n + 1, -1);
        bool valid = true;
        for (int i = 1; i <= n; i++) {
            if (same[i] == -1) {
                valid = false;
                break;
            }
            result[same[i]] = i;
        }

        // Output the result
        if (!valid) {
            cout << -1 << endl;
        } else {
            for (int i = 1; i <= n; i++) {
                cout << result[i] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
