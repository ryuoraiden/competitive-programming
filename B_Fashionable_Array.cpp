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
    vi a(n);
    for(auto &x : a) cin >> x;

    vi freq(101, 0);
    int mx = 0;
    for(int x : a) mx = max(mx, ++freq[x]);

    for(int k = 1; k <= mx; k++) {
        for(int v = 100; v >= 1; v--) {
            if(freq[v] >= k) cout << v << " ";
        }
    }
    cout << endl;

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