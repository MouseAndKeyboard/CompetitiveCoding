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

    int count = 1;
    while (true) {

        ll n, m;
        cin >> n >> m;
        if (n == 0 && m == 0) {
            break;
        }

        vec<vec<string>> grid(n, vec<string>(m, "."));

        FOR(i, n) {
            string line;
            cin >> line;
            FOR(j, m) {
                grid[i][j] = line[j];
            }
        }

        // for each cell we need to calculate the number of mines in a cicle around it.
        FOR(i, n) {
            FOR(j, m) {
                if (grid[i][j] == "*") {
                    continue;
                }

                int sum = 0;
                for(int a=-1; a <=1; a++) {
                    for(int b=-1; b <= 1; b++) {
                        if (a == b && a == 0) continue;

                        if (i + a >= n || i + a < 0 || j + b >= m || j + b < 0) continue;

                        if (grid[i + a][j + b] == "*") sum++;
                    }
                }

                grid[i][j] = to_string(sum);
            }
        }

        cout << "Field #" << count << ":\n";
        FOR(i, n) {
            FOR(j, m) {
                cout << grid[i][j];
            }
            cout << "\n";
        }

        count++;
    }

    return 0;
}
