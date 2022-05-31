#include <bits/stdc++.h>
#include <cmath>
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define vec vector
#define FOR(i, N) for(int i = 0; i < N; i++)

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pii;

bool isIn(vec<ll> nums, ll x) {
    FOR(i, nums.size()) {
        if (nums[i] == x) return true;
    }
    return false;
}

bool allPos(vec<ll> nums) {
    FOR(i, nums.size()) {
        if (nums[i] <= 0) return false;
    }
    return true;
}

bool isPrime(ll x) {
    for(ll i = 2; i < x; i++) {

        if (x % i == 0) return false;
    }
    return true;
}

int main(int argc, char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll N, x;
    cin >> N >> x;
    vec<ll> nums(N);
    FOR(i, N) {
        cin >> nums[i];
    }



    if (isIn(nums, x)) {
        cout << x << " is in the list" << endl;
    }
    if (allPos(nums)) {
        cout << "the list is all positive" << endl;
    }
    if (isPrime(x)) {
        cout << "our number is prime" << endl;
    }

    return 0;
}
