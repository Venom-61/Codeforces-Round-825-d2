#include<bits/stdc++.h>
using namespace std;

#define ll long long

// A. Make A Equal to B

void solve() {
    int n;
    cin >> n;
    long long sum = 0, ans = 0;
    vector<int> a(n), b(n);
    for(auto &x : a) {
        cin >> x;
        sum += x;
    }
    for(auto &x : b) {
        cin >> x;
        sum -= x;
    }
    for(int i = 0; i < n; ++i) {
        ans += (a[i] ^ b[i]);
    }

    ans = min(ans, 1+abs(sum));
    cout << ans << "\n";
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
