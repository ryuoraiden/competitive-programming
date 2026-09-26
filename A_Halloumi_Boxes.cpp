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
    cout << "YES" << endl;
}

inline void no() {
    cout << "NO" << endl;
}

const int INF = 1e9 + 7;
const ll LINF = 1e18 + 7;

void solve() {
    
    int n, k;
    cin >> n >> k;

    vll a(n);
    for(auto &x : a) cin >> x;

    if(k == 1 && !is_sorted(all(a))){
        no();
        return;
    }

    yes();

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