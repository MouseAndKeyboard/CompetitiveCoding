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

    ll T;
    cin >> T;
    FOR(t, T) {
        cout << "Case #" << t + 1 << ": ";

        ll N;
        cin >> N;

        FOR(i, N) {
            cout << i + 1 << " ";
        }


        vec<ll> v(N);
        ll total = 0;
        FOR(i, N) {
            cin >> v[i];
            total += v[i];
        }
        sort(v.begin(), v.end());

        ll firstpart = (N * (N - 1)) / 2;

        total += firstpart;

        ll half = total / 2;



        FOR(i, 4) {
            cout << i;
        }


        cout << "\n";
    }
    return 0;
}
