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

ll min(ll a, ll b) {
    if (a < b)
        return a;
    return b;
}

ll getSmallest(vec<vec<ll>> p, ll col) {
    return min(p[0][col], min(p[1][col], p[2][col]));
}

int main(int argc, char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    FOR(t, T) {
        cout << "Case #" << t + 1 << ": ";

        vec<vec<ll>> p(3, vec<ll>(4)); // c y m k
        FOR(printer, 3) {
            FOR(col, 4) {
                cin >> p[printer][col];
            }
        }

        ll ten = 1000000;

        ll total = 0;

        vec<ll> cols(4);

        FOR(i, 4) {
            cols[i] = getSmallest(p, i);
            if (total + cols[i] >= ten) {
                cols[i] = ten - total;
            }
            total += cols[i];
        }

        if (total != ten) {
            cout << "IMPOSSIBLE";
        } else {
            cout << cols[0] << " " << cols[1] << " " << cols[2] << " " << cols[3];
        }
        cout << "\n";
    }
    return 0;
}
