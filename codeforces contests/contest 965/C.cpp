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

int score(int i, vector<int> a){
    int score = a[i];
    a.erase(a.begin() + i);
    sort(a.begin(),a.end());
    int n = a.size();
    int medianIndex = (n + 1) / 2 - 1;
    score += a[medianIndex];
    return score;
}

void solve() {
    int n,k; cin>>n>>k;
    vector<int> a(n);
    vector<int> b(n);
	for(int& i: a) cin >> i;
	for(int& i: b) cin >> i;
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        maxi = max(maxi,score(i,a));
    }
    cout<<maxi<<'\n';
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