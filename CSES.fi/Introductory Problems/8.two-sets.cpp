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

    ll d = n * (n + 1) / 2;

    cout << (d % 2 == 0 ? "YES" : "NO");
    cout << "\n";

    return 0;
}
