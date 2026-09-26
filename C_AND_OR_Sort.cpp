#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define f first
#define s second
#define endl "\n"

inline void yes() {
    cout << "Yes" << endl;
}

inline void no() {
    cout << "No" << endl;
}

const int INF = 1e9 + 7;
const ll LINF = 1e18 + 7;

void solve() {

    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') cnt++;
    }

    // s[0] can never change (AND/OR of a single element is itself).
    if (s[0] == '1') {
        // sorted result must be all 1s
        cout << n - cnt << endl;
        return;
    }

    if (cnt == 0) {
        // already all zeros
        cout << 0 << endl;
        return;
    }

    // s[0] == '0': AND of any prefix is always 0, so any position can be
    // zeroed for 1 op. A position j can be OR'd to 1 only if the first
    // original '1' occurs at or before j. So the result is 0^a 1^(n-a)
    // with a >= (index of first '1'), minimizing
    // cost(a) = ones(s[0..a-1]) + zeros(s[a..n-1]) = 2*P[a] - a - cnt + n.
    int p0 = 0;
    while (s[p0] == '0') p0++;

    vi P(n + 1, 0);
    for (int i = 1; i <= n; i++) P[i] = P[i - 1] + (s[i - 1] == '1');

    ll best = LLONG_MAX;
    for (int a = p0; a <= n; a++) {
        best = min(best, 2LL * P[a] - a);
    }

    cout << best - cnt + n << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}