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
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    if (x1 == x2 && y1 == y2) {
        cout << "yes" << endl;
        return;
    }

    if ((x2 - x1) == (y2 - y1)) {
        cout << "yes" << endl;
        return;
    }
    
    if((y1 < x1 && x1 < y2 && y1 < x2 && x2 < y2) || (x1 < y1 && y1 < x2 && x1 < y2 && y2 < x2)){
        cout << "no" << endl;
        return;
    }

    cout << "yes" << endl;
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