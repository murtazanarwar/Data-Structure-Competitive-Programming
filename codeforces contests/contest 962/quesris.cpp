#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;
    
    vector<vector<int>> prefixA(n + 1, vector<int>(26, 0));
    vector<vector<int>> prefixB(n + 1, vector<int>(26, 0));
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 26; ++j) {
            prefixA[i + 1][j] = prefixA[i][j];
            prefixB[i + 1][j] = prefixB[i][j];
        }
        prefixA[i + 1][a[i] - 'a']++;
        prefixB[i + 1][b[i] - 'a']++;
    }
    
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--; r--;

        vector<int> freqA(26, 0), freqB(26, 0);
        
        for (int i = 0; i < 26; ++i) {
            freqA[i] = prefixA[r + 1][i] - prefixA[l][i];
            freqB[i] = prefixB[r + 1][i] - prefixB[l][i];
        }
        
        int replacements = 0;
        for (int i = 0; i < 26; ++i) {
            replacements += abs(freqA[i] - freqB[i]);
        }
        
        cout << replacements / 2 << '\n';
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

