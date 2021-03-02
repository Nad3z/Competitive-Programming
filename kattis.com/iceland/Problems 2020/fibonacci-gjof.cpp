#include <bits/stdc++.h>

using namespace std;

//__int128 mem[10010];

unsigned long long fib(unsigned int n){
    if (n == 0) return 0;
    unsigned int h = n/2, mask = 1;
    while(mask <= h) mask <<= 1;
    mask >>= 1;
    unsigned long long a = 1, b = 1, c;
    while(mask)
    {
        c = a*a+b*b;
        if (n&mask)
        {
            b = b*(b+2*a);
            a = c;
        } else {
            a = a*(2*b-a);
            b = c;
        }
        mask >>= 1;
    }
    return a;
}

int main() {
    unsigned long long n,m,l,r,d,o,input,output;
    vector<unsigned long long> A;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> input;
        A.push_back(input);
    }

    for (int i = 0; i < m; i++) {
        cin >> o;
        if (o == 1) {
            cin >> l >> r >> d;
            for (int j = l-1; j < r; j++) {
                A[j] += d;
            }
        } else if (o == 2) {
            cin >> l >> r;
            output = 0;
            for (int j = l-1; j < r; j++) {
                output += fib(A[j]);
            }
            cout << output % 1000000007 << endl;
        }
    }
}