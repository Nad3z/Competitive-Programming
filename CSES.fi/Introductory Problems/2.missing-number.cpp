#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)

int main() {
    ll n, in, sum = 0;
    cin >> n;

    REP(i, 1, n - 1) {
        cin >> in;
        sum += in;
    }

    cout << ((n * (n + 1)) / 2) - sum << "\n";

    return 0;
}
