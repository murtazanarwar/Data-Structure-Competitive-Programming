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

bool placementPossible(vector<int>& locations, int n, int dis, int cows){
    int cowCount = 1, last = locations[0];
    for(int i = 1; i < n; i++){
        if( (locations[i] - last) >= dis ){
            cowCount++;
            last = locations[i];
        }

        if( cowCount >= cows ) return true;
    }

    return false;
}

void solve() {
    int n , cows;
    cin>>n>>cows;
    vector<int> locations;
    for(int i = 0; i < n; i++ ){
        int temp;
        cin>>temp;
        locations.push_back(temp);
    }
    sort(locations.begin(), locations.end());

    int low = 1, high = ( locations[n-1] - locations[0] );
    while( low <= high ){
        int mid = ( low + high ) / 2;
        if( placementPossible(locations, n, mid, cows) ){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout<<high;
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