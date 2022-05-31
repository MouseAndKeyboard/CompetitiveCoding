#include <bits/stdc++.h>
#define endl "\n"
#define F first;
#define S second;
#define pb push_back;
#define mp make_pair;
#define vec vector

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pii;


int main(int argc, char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll N, x;
    cin >> N >> x;
    vec<ll> v(N, 0);
    for (int i = 0; i < N; i++)
        cin >> v[i];

    // reduce
    bool in = false;
    for (int i = 0; i < N; i++) {
        if (v[i] == x) {
            in = true;
        } else {
            in = in || false;
        }
    }



}
