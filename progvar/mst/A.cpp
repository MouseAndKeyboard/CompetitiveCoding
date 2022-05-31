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

    ll q;
    cin >> q;
    FOR(q_i, q) {
        ll n, m, c_lib, c_road;
        cin >> n >> m >> c_lib >> c_road;

        if (c_lib <= c_road) {
            cout << c_lib * n << "\n";
            continue;
        }

        vec<vec<int>> graph(n);
        FOR(e, m) {
            ll u, v;
            cin >> u >> v;
            graph[u-1].push_back(v-1);
            graph[v-1].push_back(u-1);
        }

        vec<bool> inMST(n, false);
        vec<ll> pred(n, -1);

        stack<ll> stk;
        inMST[0] = true;
        FOR(c, graph[0].size()) {
            ll child = graph[0][c];
            if (!inMST[child]) {
                pred[child] = 0;
                stk.push(child);
            }
        }

        ll builtRoads = 0;
        ll libraries = 0;
        while (!stk.empty()) {
            while(!stk.empty()) {
                ll node = stk.top();
                stk.pop();
                if (inMST[node]) continue;
                inMST[node] = true;
                builtRoads++;

                FOR(c, graph[node].size()) {
                    ll child = graph[node][c];
                    if (!inMST[child]) {
                        pred[child] = node;
                        stk.push(child);
                    }
                }
            }
            libraries++;
            FOR(i, inMST.size()) {
                if (inMST[i] == false) {
                    stk.push(i);
                    break;
                }
            }
        }
        cout << c_lib * libraries + c_road * builtRoads;
    }

    return 0;
}
