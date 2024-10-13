#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int maxRepetitions = 1, count = 1;
    
    string DNA;
    getline(cin,DNA);
    int n = DNA.length();
    for(int i = 1; i < n ; i++){
        if( DNA[i] == DNA[i - 1] ){
            count++; 
        } 
        else{
            count = 1;
        }
        maxRepetitions = max(count,maxRepetitions);
    }

    cout<<maxRepetitions;
    return 0;
}