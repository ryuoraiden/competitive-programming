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

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}


void solve() {
    int n, x;
    cin >> n >> x;

    // distinct primes of x (at most 6, since 2*3*5*7*11*13*17 > 3e5)
    vi P;
    for (int d = 2, y = x; y > 1; d++) {
        if ((ll)d * d > y) d = y;
        if (y % d == 0) {
            P.pb(d);
            while (y % d == 0) y /= d;
        }
    }
    int k = P.size(), full = (1 << k) - 1;

    // group piles by which primes of x they contain
    vll sum(1 << k, 0);
    vector<bool> has(1 << k, false);
    for (int i = 0; i < n; i++) {
        int v; cin >> v;
        int m = 0;
        for (int j = 0; j < k; j++) if (v % P[j] == 0) m |= 1 << j;
        sum[m] += v;
        has[m] = true;
    }

    // Final prime set S of x is valid iff the piles sharing a prime with S
    // have (common primes with x) exactly S; then all those piles get drained.
    ll ans = 0;
    for (int S = 1; S <= full; S++) {
        ll tot = 0; int acc = full; bool any = false;
        for (int m = 0; m <= full; m++) {
            if ((m & S) && has[m]) { tot += sum[m]; acc &= m; any = true; }
        }
        if (any && acc == S) ans = max(ans, tot);
    }
    cout << ans << endl;
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