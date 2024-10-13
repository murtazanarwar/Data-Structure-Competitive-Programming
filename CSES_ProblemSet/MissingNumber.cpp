#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    vector<int> numbers(n+1,0);
    for(int i = 0; i < n - 1; i++){
        int num; cin>>num;
        numbers[num] = 1;
    }

    for(int i = 1; i < n + 1; i++){
        if(!numbers[i]){
            cout<<i;
            break;
        }
    }

    return 0;
}