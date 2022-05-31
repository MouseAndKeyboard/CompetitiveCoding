#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <queue>
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define vec vector
#define FOR(i, N) for(ll i = 0; i < N; i++)

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pii;


int main(int argc, char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll N;
    cin >> N;
    FOR(xyz, N) {

        int S, P;
        cin >> S >> P;
        vec<pii> outpostLoc(P);
        FOR(i, P) {
            ll x, y;
            cin >> x >> y;
            outpostLoc[i] = mp(x,y);
        }
        vec<vec<ld>> distance(P, vec<ld>(P, -1));

        FOR(i, P) {
            FOR(j, P) {
                ld a = outpostLoc[i].F - outpostLoc[j].F;
                ld b = outpostLoc[i].S - outpostLoc[j].S;
                distance[i][j] = sqrt(
                    pow(a, 2.0) +
                    pow(b, 2.0)
                );
            }
        }

        priority_queue<pair<ld, ll>> frontier;
        set<ll> inMST;
        vec<ld> distances;
        frontier.push(mp(0, 0));
        while(!frontier.empty()) {
            pair<ld, ll> next = frontier.top();
            frontier.pop();

            ld dist = next.F;
            ll node = next.S;

            if (inMST.count(node) == 0) {
                // add to the mst
                inMST.insert(node);
                distances.pb(dist);

                FOR(v, P) {
                    pair<ld, ll> child = mp(distance[node][v], v);
                    frontier.push(child);
                }
            }
        }

        sort(distances.begin(), distances.end());
        FOR(t, distances.size()) {
            cout << distances[t] << " " << endl;
        }


    }

    return 0;
}
