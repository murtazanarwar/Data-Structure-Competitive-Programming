#include <bits/stdc++.h>
using namespace std;

int f(int i, int j, int mov, vector<vector<int>>& vis){
    if (i == 6 && j == 6 && mov == 48) return 1;
    if (i == 6 && j == 6 && mov != 48) return 0;
    if (i < 0 || i > 6 || j < 0 || j > 6 || vis[i][j] != 0) return 0;

    vis[i][j] = 1;
    
    bool stuck = 
        ((i == 6 || i == 0 || vis[i + 1][j] == 1 || vis[i - 1][j] == 1) && (j > 0 && j < 6 && vis[i][j - 1] == 0 && vis[i][j + 1] == 0)) ||
        ((j == 6 || j == 0 || vis[i][j + 1] == 1 || vis[i][j - 1] == 1) && (i > 0 && i < 6 && vis[i - 1][j] == 0 && vis[i + 1][j] == 0));
    if (stuck) {
        vis[i][j] = 0;
        return 0;
    }

    int left = f(i - 1, j, mov + 1, vis);
    int right = f(i + 1, j, mov + 1, vis);
    int up = f(i, j - 1, mov + 1, vis);
    int down = f(i, j + 1, mov + 1, vis);

    vis[i][j] = 0;
    return left + right + up + down;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<vector<int>> vis(7, vector<int>(7, 0));
    int ans = f(0, 0, 0, vis);
    
    cout << ans;

    return 0;
}
