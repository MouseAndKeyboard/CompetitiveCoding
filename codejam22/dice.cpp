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
        vec<ll> S(N);
        FOR(i, N) {
            cin >> S[i];
        }

        sort(S.begin(), S.end());
        ll length = 0;
        FOR(i, N) {
            if (length < S[i]) {
                length++;
            }
        }
        cout << length << "\n";
    }
    return 0;
}
