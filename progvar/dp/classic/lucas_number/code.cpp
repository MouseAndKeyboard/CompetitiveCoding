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

vec<vec<ll>> mult(vec<vec<ll>> A, vec<vec<ll>> B) {
    vec<vec<ll>> result(2, vec<ll>(2));
    result[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0];
    result[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1];
    result[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0];
    result[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1];
    return result;
}

int main(int argc, char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vec<vec<ll>> lucasMatrix(2, vec<ll>(2,1));
    lucasMatrix[1][1] = 0;
    ll N;
    cin >> N;

    vec<vec<ll>> prev(2,vec<ll>(2, 0));
    prev[0][0] = 1;
    prev[1][1] = 1;

    FOR(i, N) {
        prev = mult(lucasMatrix, prev);
    }

    vec<ll> v(2,0);
    v[0] = 1;
    v[1] = 2;

    // cout << prev[0][0] * v[0] + prev[0][1] * v[1] << "\n";
    cout << prev[1][0] * v[0] + prev[1][1] * v[1] << "\n";

    return 0;
}
