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
    ll n;
    cin >> n;

    if (n < 4 && n > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    REP(i, 1, n) {
        if (i % 2 == 0) cout << i << " ";
    }

    REP(i, 1, n) {
        if (i % 3 == 0) cout << i << " ";
    }
    cout << "\n";

    return 0;
}
