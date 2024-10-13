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
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    
    int suneet = 0;

    if ((a1 > b1 && a2 > b2) || (a1 > b1 && a2 == b2) || (a1 == b1 && a2 > b2)) {
        suneet++;
    }

    if ((a1 > b2 && a2 > b1) || (a1 > b2 && a2 == b1) || (a1 == b2 && a2 > b1)) {
        suneet++;
    }

    if ((a2 > b1 && a1 > b2) || (a2 > b1 && a1 == b2) || (a2 == b1 && a1 > b2)) {
        suneet++;
    }

    if ((a2 > b2 && a1 > b1) || (a2 > b2 && a1 == b1) || (a2 == b2 && a1 > b1)) {
        suneet++;
    }
    
    cout << suneet << '\n';
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