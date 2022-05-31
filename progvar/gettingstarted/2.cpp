#include <bits/stdc++.h>
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define vec vector

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pii;


int main(int argc, char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        ll a,b;
        cin >> a >> b;
        if (a < b) {
            cout << "<" << endl;
        } else if (a > b) {
            cout << ">" << endl;
        } else {
            cout << "=" << endl;
        }
    }
    return 1;
}
