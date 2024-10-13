#include <bits/stdc++.h>
using namespace std;


bool canFormSubsequence(string s, string t) {
    int j = 0;
    for (int i = 0; i < s.length() && j < t.length(); ++i) {
        if (s[i] == t[j]) {
            ++j;
        }
    }
    return j == t.length();
}

void solve() {
    string s, t;
    cin >> s >> t;

    int i = 0, j = 0;
    while(i < s.length() && j < t.length()){
        if( s[i] == t[j]){
            i++; j++;
        }else if(s[i] == '?') {
            s[i] = t[j];
            i++; j++;
        } else {
            i++;
        }
    }
    if(i >= s.length() && j < t.length() ){
        cout<<"NO"<<endl;
    } else {
        for(int i = 0; i < s.length(); i++)
{
    if(s[i] == '?') s[i] = 'a';
} cout<<"YES"<<endl; cout<<s<<endl;   }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}

