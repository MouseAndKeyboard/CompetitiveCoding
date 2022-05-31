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


void nrow(int s) {};
void row(int s) {}
void coll(int s) {}
void colr(int s) {}
void cold(int s) {}

void zero(int s) {
    row(s);
    cold(s);
    nrow(s);
    row(s);
    cold(s);
    row(s);
}

void one(int s) {
    nrow(s);
    coll(s);
    nrow(s);
    coll(s);
    nrow(s);
}

void two(int s) {
    row(s);
    colr(s);
    row(s);
    coll(s);
    row(s);
}

void three(int s) {
    row(s);
    colr(s);
    row(s);
    colr(s);
    row(s);
}

void four(int s) {
    nrow(s);
    cold(s);
    row(s);
    colr(s);
    nrow(s);
}

void five(int s) {
    row(s);
    coll(s);
    row(s);
    colr(s);
    row(s);
}

void six(int s) {
    row(s);
    coll(s);
    row(s);
    cold(s);
    row(s);
}

void seven(int s) {
    row(s);
    colr(s);
    nrow(s);
    colr(s);
    nrow(s);
}

void eight(int s) {
    row(s);
    cold(s);
    row(s);
    cold(s);
    row(s);
}

void nine(int s) {
    row(s);
    cold(s);
    row(s);
    colr(s);
    nrow(s);
}

int main(int argc, char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s;
    ll n;
    cin >> s >> n;

    vec<int> digits;

    while (true) {
        digits.push_back(n % 10);
        if (n < 10) {
            break;
        }
        n /= 10;
    }

    for (int i = digits.size() - 1; i >= 0; i--) {
        switch (digits[i]) {
            case 0: zero(s);
                break;
            case 1: one(s);
                break;
            case 2: two(s);
                 break;
            case 3: three(s);
                break;
            case 4: four(s);
                break;
            case 5: five(s);
                break;
            case 6: six(s);
                break;
            case 7: seven(s);
                break;
            case 8: eight(s);
                break;
            case 9: nine(s);
                break;
        }

    }

    return 0;
}
