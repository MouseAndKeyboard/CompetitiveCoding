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

    while(true) {
        ll n, m; // m - vertices, n - edges
        cin >> m >> n;
        if (n == 0 && m == 0) {
            return 0;
        }

        vec<vec<pii>> adj(m, vec<pii>());

        set<ll> unVisited;
        FOR(i, m)
            unVisited.insert(i);

        ll current = 0;
        FOR(e, n) {
            ll u, v, w;
            cin >> u >> v >> w;
            adj[u].push_back(mp(-w, v));
            adj[v].push_back(mp(-w, u));
            current += w;
        }



        priority_queue<pii> frontier;
        frontier.push(mp(0, 0));
        ll mst = 0;

        while(!frontier.empty()) {
            pii edge = frontier.top();
            frontier.pop();
            ll w = edge.F;
            ll v = edge.S;


            if (unVisited.count(v)) {
                unVisited.erase(v);
                mst += -w
;

                FOR(o, adj[v].size()) {
                    pii child = adj[v][o];
                    frontier.push(child);
                }
            }
        }

        cout << current - mst << endl;
    }

    return 0;
}
