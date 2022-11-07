#include<bits/stdc++.h>
using namespace std;

#define ll long long

// B. Playing With GCD
int gcd(int a, int b) {
    if (!a || !b)
        return a | b;
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do {
        b >>= __builtin_ctz(b);
        if (a > b)
            swap(a, b);
        b -= a;
    } while (b);
    return a << shift;
}

ll lcm (ll a, ll b) {
    ll g = gcd(a, b);
    return (a * b / g);
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n+2, 1);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    vector<int> b(n + 2, 1);
    for(int i = 1; i <= n + 1; i++) {
        b[i] = lcm(a[i], a[i-1]);
    }

    for(int i = 1; i <= n; i++) {
        if(gcd(b[i], b[i + 1]) != a[i]) {
            cout << "NO\n";
            return ;
        }
    }
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}
