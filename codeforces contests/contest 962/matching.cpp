#include <bits/stdc++.h>
using namespace std;

int minReplacements(string s1, string s2) {
    int n = s1.length();
    int i = 0, j = 0, ans = 0;
    while( i < n && j < n){
        if( s1[i] == s2[j] ){
            i++;
            j++;
        } else {
            if( s1[i] - 'a' < s2[j] - 'a') {
                i++;
                ans++;
            } else {
                j++;
                ans++;
            }
        }
    }
    return ans;
}

int main() {
    string a = "";
    string b = "abef";
    cout<<minReplacements(a,b);
    return 0;
}