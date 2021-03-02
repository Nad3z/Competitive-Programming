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
    cout << n << " ";

    while(n != 1) {
        n = n % 2 == 0 ? n / 2 : n * 3 + 1;
        cout << n << " ";
    }

    cout << "\n";
    return 0;
}
