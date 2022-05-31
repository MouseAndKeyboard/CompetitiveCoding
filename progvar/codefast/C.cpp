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

    ll Z, O;
    cin >> Z >> O;
    ll N = Z + O;
    vec<ll> v(N, 0);
    FOR(i, N) {
        cin >> v[i];
    }

    for (int i = 1; i < N; i++) {
        // all sorted up-to and not including ith index
        if (v[i] == 0) {
            // put it in the right spot
            for (int j = i - 1; ; j--) {
                if (v[j] == 0 || j == -1) break;

                ll temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;

                FOR(t, N) {
                    cout << v[t] << " ";
                }
                cout << "\n";
            }
        }
    }


    FOR(i, Z+O) {
        cout << v[i] << " ";
    }
    cout << "\n";

    return 0;
}
