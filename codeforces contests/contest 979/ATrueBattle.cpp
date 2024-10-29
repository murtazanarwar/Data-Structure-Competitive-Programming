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
    string s;
    cin>>s;
    if( s[0] == '1' || s[n-1] == '1'){
        cout<<"YES"<<'\n';
        return;
    }
    int cnt = 0;
    for(int i = 1; i < n - 1; i++){
        if( s[i] == '1' ){
            cnt++;
        } else {
            cnt = 0;
        }

        if( cnt == 2 ){
            cout<<"YES"<<'\n';
            return;
        }
    }
    cout<<"NO"<<'\n';
    return;
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