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
    int n, k;
    cin>>n; cin>>k;
    if( k == 0 ){
        cout<<0<<"\n";
        return;
    }
    if( k > 0 && k <= n ){
        cout<<1<<"\n";
        return;
    }

    k -= n;
    int count = 1;
    
    while( k > 0 ){
        if( k > n - 1){
            k -= 2 * ( n - 1 );
            count += 2;
            n--;
        } else {
            k -= n-1;
            count++;
        }
    }
    cout<<count<<"\n";
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