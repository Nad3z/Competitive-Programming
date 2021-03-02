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
    ll t, x, y;
    cin >> t;

    REP(i, 0, t - 1) {
        cin >> y >> x;
        cout << ((x > y) ? (x % 2 == 1 ? (x * x - y + 1) : ((x - 1) * (x - 1) + y)) : ((y % 2 == 0) ? (y * y - x + 1) : ((y - 1) * (y - 1) + x)));
        cout << "\n";
    }

    return 0;
}
