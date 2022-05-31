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

        ll E;
        cin >> E;
        ll W;
        cin >> W;
        vec<vec<ll>> exercises(E);
        FOR(i, E) {
            vec<ll> weights(W);
            ll w;
            cin >> w;
            weights[w - 1]++;
            exercises[i] = weights;
        }

        ll ex_target = 0;
        stack<ll> stack;

        ll minSum = INT_MAX;


        stack.pop();
        stack.push(2);


        while ( q.size() ){
            ll current_node = q.front();
            q.pop();
            for (const ll next_node : adjacencyList[current_node]){
                if (visited[next_node])
                    continue;
                dist[next_node] = dist[current_node] + 1;
                visited[next_node] = 1;
                pred[next_node] = current_node;
                q.push(next_node);
            }
        }


        cout << "\n";
    }
    return 0;
}
