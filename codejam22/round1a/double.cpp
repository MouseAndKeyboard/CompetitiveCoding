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

        string S;
        string n_S = "";
        cin >> S;

        FOR(i, S.length()) {
            if (i + 1 >= S.length()) {
                n_S.pb(S[i]);
            }
            else {
                char c = S[i];

                char c_n = S[i + 1];
                if (c_n < c) {
                    n_S.pb(S[i]);
                } else if (c_n > c) {
                    n_S.pb(S[i]);
                    n_S.pb(S[i]);
                } else {
                    // c_n == c
                    string app = "";
                    ll new_i = i;

                    for(int j = i + 1; j < S.length(); j++) {
                        app.pb(S[i]);
                        new_i = j;
                        if (S[i] != S[j]) {
                            break;
                        }
                    }
                    if (S[new_i] > S[new_i - 1]) {
                        n_S.append(app);
                        n_S.append(app);
                    } else {
                        n_S.append(app);
                    }
                    i = new_i - 1;
                }
            }
        }
        cout << n_S;
        cout << "\n";
    }
    return 0;
}
