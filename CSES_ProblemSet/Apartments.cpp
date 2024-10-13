#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m,k;
    cin>>n>>m>>k;

    vector<int> applicants, apartments;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        applicants.push_back(x);
    }

    for(int i = 0; i < m; i++){
        int x;
        cin>>x;
        apartments.push_back(x);
    }

    sort(applicants.begin(),applicants.end());
    sort(apartments.begin(),apartments.end());

    int i = 0, j = 0, cnt = 0;
    while( i < n && j < m){
        if(applicants[i] <= apartments[j] + k && applicants[i] >= apartments[j] - k){
            cnt++;
            i++;
            j++;
        } else if (applicants[i] < apartments[j] - k) {
            i++;
        } else {
            j++;
        }
    }
    cout<<cnt;
    return 0;
}