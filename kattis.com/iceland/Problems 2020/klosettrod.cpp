#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, input;
    map<int, int> A;
    vector<int> out;

    cin >> n;

    // Skrifa inn öll inntök frá notanda inní mappið
    for (int i = 1; i < n+1; i++) {
        cin >> input;
        A[i] = input;
    }

    for (int i = 1; i < n+1; i++) {
        int most = -1;
        // Fara í gegnum öll stökinn (values) í mappinu og finna stærsta
        for(std::map<int, int>::iterator it = A.begin(); it != A.end(); it++) {
            if (it->second > most) {
                most = it->second;
            }
        }
        
        // Fara í gegnum öll stökinn (values) í mappinu og finna key sem passar við valuið sem var stærst (most)
        for (auto it = A.begin(); it != A.end(); it++) {
            if (it->second == most) {
                out.push_back(it->first); // Bæta key í output vectorinn
                A[it->first] = -1; // Setja stakið (value) sem var stærsta í -1
            }
        }
    }

    for (int k : out) {
        cout << k << " ";
    }
    cout << endl;
}