#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int x, y, k; cin >> x >> y >> k;
		for(int i = 0; i < k - k % 2; i++){
			cout << x - (i & 1 ? 1 : -1) * (i / 2 + 1) << " " << y << "\n";
		} 
		if(k & 1){
			cout << x << " " << y << "\n";
		}
	}
}

//( i & 1 ) --> 1 --> odd