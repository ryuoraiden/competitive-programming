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
    
    int d, s;
    cin >> d >> s;

    vector<pair<int, int>> v(d);

    for(auto &x : v) {
        cin >> x.f >> x.s;
    }

    int min_sum = accumulate(all(v), 0, [](int acc, const pair<int, int> &p) {
        return acc + p.f;
    });

    int max_sum = accumulate(all(v), 0, [](int acc, const pair<int, int> &p) {
        return acc + p.s;
    });

    if(s < min_sum || s > max_sum) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    s -= min_sum;
    for(auto &x : v) {
        int add = min(s, x.s - x.f);
        cout << x.f + add << " ";
        s -= add;
    }
    cout << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}