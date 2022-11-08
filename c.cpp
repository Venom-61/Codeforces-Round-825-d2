#include<bits/stdc++.h>
using namespace std;

#define ll long long

// C. Good Subarrays (Easy version)

/* Greedy approach */

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];

    long long count = 1, ans = 0;
	int left = 0, right = 0;
	while(left < n) {
		while(right < n and count <= a[right]) {
			right++;
			count++;
		}
		ans += count - 1;
		left++;
		count--;
	}
	cout << ans << endl;
}

/* DP Approach */

/* void solve() { */
/*     int n; */
/*     cin >> n; */
/*     vector<ll> dp(n+5, 0); */
/*     ll ans = 0; */
/*     for(int i = 1; i <= n; i++) { */
/*         ll x; */ 
/*         cin >> x; */
/*         dp[i] = min(dp[i-1] + 1, x); */
/*         ans += dp[i]; */
/*     } */
/*     cout << ans << "\n"; */
/* } */

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
