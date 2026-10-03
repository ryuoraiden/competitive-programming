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
    
    int n, d;
    cin >> n >> d;
    vi a(n);
    for(auto &x:a) cin >> x;
    sort(all(a));
    int p;
    if(n%2){
        for(int i = 0; i < n; i++){
            vi b;
            for(int j = 0; j < n; j++){
                if(i != j) b.pb(a[j]);
            }
            p = 1;
            for(int j = 0; j < n - 1; j+=2){
                if(b[j+1] - b[j] > d){
                    p = 0; break;
                }
            }
            if(p) break;
        }
    }
    else{
        p = 1;
        for(int i = 0; i < n; i+=2){
            if(a[i+1] - a[i] > d){ p = 0; break; }
        }
    }
    

    cout << (p ? "YES" : "NO") << endl;

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