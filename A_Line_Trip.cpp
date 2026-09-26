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

inline void yes() {
    cout << "Yes" << endl;
}

inline void no() {
    cout << "No" << endl;
}

const int INF = 1e9 + 7;
const ll LINF = 1e18 + 7;

void solve() {
    
    int n, x;
    cin >> n >> x;

    vi a(n+2);
    a[0] = 0;
    a[n+1] = x;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int ans = (a[n+1] - a[n])*2;
    for(int i = 0; i < n+1; i++) {
        ans = max(ans, a[i+1] - a[i]);
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