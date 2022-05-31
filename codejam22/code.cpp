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


void start_div_row(ll cells) {
    cout << "..+";
    FOR(i, cells - 1) {
        cout << "-+";
    }
    cout << "\n";
}

void start_dot_row(ll cells) {
    cout << "..|";
    FOR(i, cells - 1) {
        cout << ".|";
    }
    cout << "\n";
}

void div_row(ll cells) {
    cout << "+";
    FOR(i, cells) {
        cout << "-+";
    }
    cout << "\n";
}

void dot_row(ll cells) {
    cout << "|";
    FOR(i, cells) {
        cout << ".|";
    }
    cout << "\n";
}

int main(int argc, char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    FOR(t, T) {
        ll R, C;
        cin >> R >> C;

        cout << "Case #" << t + 1 << ":\n";

        start_div_row(C);
        start_dot_row(C);
        div_row(C);
        FOR(r, R - 1) {
            dot_row(C);
            div_row(C);
        }

    }

    return 0;
}
