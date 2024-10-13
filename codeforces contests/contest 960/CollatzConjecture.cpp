#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

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
       long long x, y, k;
        cin >> x >> y >> k;

        // Calculate how many times x can be divided by y
        long long divCount = x / y;

        // Calculate the remainder when x is divided by y
        long long remainder = x % y;

        // Adjust x to be not divisible by y
        x -= remainder;

        // Add k to x
        x += k;

        cout << x << endl;
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