#include <bits/stdc++.h>

using namespace std;

int main() {
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    int p = 20;
    vector<int> sizes = {5, 10, 50, 100, 500};
    for (int n: sizes) {
        vector<vector<int>> adj(n+1);
        for (int i = 1; i <= n; i++) {
            for (int j = i+1; j <=n; j++) {
                if (rng() % 100 <= p or i == 1) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        ofstream fout("example_graphs/erdos_" + to_string(n) + ".adjlist");
        for (int i = 1; i <= n; i++) {
            fout << i;
            if (!adj[i].empty()) {
                fout << " ";
            }
            for (int j = 0; j < (int)adj[i].size(); j++) {
                fout << adj[i][j];
                if (j < (int)adj[i].size() - 1) {
                    fout << " ";
                }
            }
            fout << "\n";
        }
    }
}