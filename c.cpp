#include<bits/stdc++.h>
using namespace std;

#define ll long long

// C. Good Subarrays (Easy version)

void solve() {
    int n;
    cin >> n;
    vector<ll> dp(n+5, 0);
    ll ans = 0;
    for(int i = 1; i <= n; i++) {
        ll x; cin >> x;
        dp[i] = min(dp[i-1] + 1, x);
        ans += dp[i];
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}
