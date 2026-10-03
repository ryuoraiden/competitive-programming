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
    
    int n,k;
    cin >> n >> k;
    vi a(n);
    for(auto &x:a) cin >> x;
    sort(all(a));
    int c = 1, ans = 1;
    for(int i = 0; i < n - 1; i++){
        if(a[i+1] - a[i] > k) c = 1;
        else c++;
        ans = max(ans,c);
    }
    cout << n - ans << endl;

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