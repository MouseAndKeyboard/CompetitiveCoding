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

    int N;
    cin >> N;

    vec<ll> burles(N, 0);
    FOR(i, N) {
        cin >> burles[i];
    }

    // get richest person
    ll rich = 0;
    FOR(i, N) {
        rich = max(rich, burles[i]);
    }

    // reduce
    ll total = 0;
    FOR(i, N) {
        total += rich - burles[i];
    }

    cout << total << endl;

    return 0;
}
