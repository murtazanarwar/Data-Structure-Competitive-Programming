#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b, ll& x, ll& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

bool find_any_solution(ll a, ll b, ll c, ll &x0, ll &y0, ll &g) {
    g = gcd(abs(a), abs(b), x0, y0);
    if (c % g) {
        return false;
    }

    x0 *= c / g;
    y0 *= c / g;
    if (a < 0) x0 = -x0;
    if (b < 0) y0 = -y0;
    return true;
}


int main(){
    ll X, Y;
    cin>>X>>Y;
    ll a = - X;
    ll b = Y;
    ll g;
    ll B,A;
    if(find_any_solution(a,b,2,B,A,g)){
        cout<<A<<" "<<B<<'\n';
    } else {
        cout<<"-1"<<'\n';
    }

    return 0;
}

// |BX-AY| = 2;