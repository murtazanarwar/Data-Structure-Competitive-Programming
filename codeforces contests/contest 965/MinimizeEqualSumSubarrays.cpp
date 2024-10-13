#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> p(n);
		for(int& i: p) cin >> i;
		rotate(p.begin(), p.begin() + 1, p.end());
		for(int i: p) cout << i << " ";
		cout << "\n";
	}
}

