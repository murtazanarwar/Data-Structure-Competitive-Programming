#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> matrix(n + 1, vector<int>(m + 1));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> matrix[i][j];
            pq.push({matrix[i][j], {i, j}});
        }
    }
    
    vector<int> dr = {-1, 1, 0, 0};
    vector<int> dc = {0, 0, -1, 1};
    
    while (!pq.empty()) {
        int value = pq.top().first;
        int i = pq.top().second.first;
        int j = pq.top().second.second;
        pq.pop();
        
        bool canReduce = true;
        for (int d = 0; d < 4; ++d) {
            int ni = i + dr[d];
            int nj = j + dc[d];
            if (ni >= 1 && ni <= n && nj >= 1 && nj <= m) {
                if (matrix[ni][nj] >= value) {
                    canReduce = false;
                    break;
                }
            }
        }
        
        if (canReduce) {
            matrix[i][j]--;
            pq.push({matrix[i][j], {i, j}});
        }
    }
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}