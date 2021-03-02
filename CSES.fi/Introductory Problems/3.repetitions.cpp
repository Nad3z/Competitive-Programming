#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (__typeof(a) i = a; i <= b; i++)

int main() {
    int out = 1, n = 1;
    string in;
    cin >> in;

    REP(i, 0, (int)in.length() - 1) {
        if (in[i - 1] == in[i]) {
            n++;
            if (n > out) out = n;
        }

        else n = 1;
    }

    cout << out << "\n";

    return 0;
}
