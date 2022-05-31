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

    ll m, nodes, T;

    cin >> nodes >> m >> T;

    vec<vec<pii>> graph(nodes);

    FOR(i, m) {
        ll u, v, t;
        cin >> u >> v >> t;
        graph[u - 1].pb(mp(v - 1, t));
    }

    ll src = 0;
    ll n = nodes - 1;



    return 0;
}
