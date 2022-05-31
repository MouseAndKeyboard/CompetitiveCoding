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

    ll n,k;
    cin >> n >> k;
    ll count = 0;
    for (ll i = 0; i < n; i++) {
        ll t;
        cin >> t;
        if (t % k == 0) count++;
    }
    cout << count;
}
