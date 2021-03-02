#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (__typeof(b) i = a; i <= b; i++)

int main() {
    ll k, out;
    cin >> k;

    REP(i, 1, k) {
        out = (i * i) * ((i * i) - 1)/2;
        out -= 4 * (i - 1) * (i - 2);
        cout << out << "\n";
    }

    return 0;
}
