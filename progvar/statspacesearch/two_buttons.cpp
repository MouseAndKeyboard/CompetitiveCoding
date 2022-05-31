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

    ll m, n;
    ll count = 0;
    cin >> n >> m;

    while(n != m) {
        if (n < m) {
            if (m % 2 == 0) {
                // we can just half it
                m /= 2;
                count++;
            } else {
                // we have to make m even
                m++;
                count++;
            }
        } else {
            // m < n: need to make m bigger
            m++;
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
