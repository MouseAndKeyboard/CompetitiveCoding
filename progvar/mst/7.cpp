#include <bits/stdc++.h>
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define vec vector
#define FOR(i, N) for(ll i = 0; i < N; i++)

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pii;


int main(int argc, char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, k;
    cin >> n >> m >> k;
    vec<ll> xs(k);
    FOR(i, k) {
        cin >> xs[i];
    }

    vec<vec<pii>> graph(n);
    FOR(i, m) {
        ll u, v, w;
        cin >> u >> v >> w;
        u = u - 1;
        v = v - 1;
        graph[u].pb(mp(v, w));
        graph[v].pb(mp(u, w));
    }

    return 0;
}
