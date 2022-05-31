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

    ll n, m;
    cin >> n >> m;
    // n odd

    int a = 0;
    FOR(r, n) {
        if (r % 2 == 0) {
            FOR(c, m) {
                cout << "#";
            }
        } else {
            if (a == 0) {
                FOR(c, m - 1) {
                    cout << ".";
                }
                cout << "#";
                a = 1;
            } else {
                cout << "#";
                FOR(c, m - 1) {
                    cout << ".";
                }

                a = 0;
            }
        }


        cout << "\n";
    }

    return 0;
}
