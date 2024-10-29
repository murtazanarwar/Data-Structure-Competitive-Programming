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
    int n;
    cin>>n;
    vector<int> a;
    for( int i = 0; i < n; i++ ){
        int temp; cin>>temp;
        a.push_back(temp);
    }
    int maxi = *max_element(a.begin(),a.end());
    int mini = *min_element(a.begin(),a.end());
    int score = ( n - 1 ) * ( maxi - mini );
    cout<<score<<"\n";
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