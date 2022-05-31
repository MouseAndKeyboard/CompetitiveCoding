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

    string s;
    cin >> s;

    int m = 0;
    int steps = 1;
    FOR(i, s.size() + 1) {
        if (i == s.size() || s[i] == 'A' || s[i] == 'O' || s[i] == 'E' || s[i] == 'I' || s[i] == 'U' || s[i] == 'Y') {
            m = max(m, steps);
            steps = 0;
        }
        steps++;
    }

    cout << m;

    return 0;
}
