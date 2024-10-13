#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    long long moves = 0;
    long long prev; cin>>prev;
    for(int i = 0; i < n - 1; i++){
        long long num;
        cin>>num;
        if(num < prev){
            moves += prev - num;
        } else {
            prev = num;
        }
    }
    cout<<moves;
    return 0;
}