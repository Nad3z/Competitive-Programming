#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, input;
    double s1 = 0, s2 = 0;
    vector<int> A;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;
        A.push_back(input);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            s1 += abs(A[i] - A[j]);
            s2 += A[i];
        }
    }

    cout << setprecision(12) << s1 / (2*s2) << endl;
}