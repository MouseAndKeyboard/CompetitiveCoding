#include <bits/stdc++.h>
#include <cmath>
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

ll manhatten(pii p1, pii p2) {
    return abs(p2.F - p1.F) + abs(p2.S - p1.S);
}

int main(int argc, char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vec<pii> coord(n);
    FOR(i, n) {
        ll x, y;
        cin >> x >> y;
        coord[i] = mp(x, y);
    }

    vec<ll> stationCost(n);
    ll minStation = -1;
    ll minStationCost = 999999999;

    FOR(i, n) {
        cin >> stationCost[i];
        if (stationCost[i] < minStationCost) {
            minStation = i;
            minStationCost = stationCost[i];
        }
    }

    vec<ll> wireCost(n);
    FOR(i, n) {
        cin >> wireCost[i];
    }

    vec<bool> inMST(n, false);
    vec<bool> hasStation(n, false);

    vec<ll> pred(n, -1);
    priority_queue<pair<ll, pair<pii, bool>>> pq;

    hasStation[minStation] = true;
    pq.push(mp(0, mp(mp(-1, minStation), true)));
    while (!pq.empty()) {
        pair<ll, pair<pii, bool>> p = pq.top();
        pq.pop();
        ll weight = -p.F; // negative because we store it in the pq negative
        pair<pii, bool> data = p.S;
        pii edge = data.F;
        ll src = edge.F;
        ll dst = edge.S;
        bool stationBuild = data.S;

        if (inMST[dst]) {
            // we've already added this vetex to the MST
            continue;
        } else {
            // add the destination to the tree formally
            inMST[dst] = true;

            // either build the wire or the station
            hasStation[dst] = stationBuild;


            // add the destination's children to the tree
            FOR(v, n) {
                ll dist = manhatten(coord[dst], coord[v]);
                ll costPerKm = wireCost[dst] + wireCost[v];
                ll edgeCost = min(stationCost[v], dist * costPerKm);
                pq.push(mp(-edgeCost, mp(dst, v)));
            }
        }
    }

    // We now have the minimum spanning tree.
    // We want to remove edges which

    return 0;
}
