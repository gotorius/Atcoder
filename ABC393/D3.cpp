#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    vector<int> ones;
    for (int i = 0; i < N; ++i) {
        if (S[i] == '1') {
            ones.push_back(i);
        }
    }

    int M = ones.size();
    int median = ones[M / 2];

    long long cost = 0;
    for (int i = 0; i < M; ++i) {
        cost += abs(ones[i] - (median - M / 2 + i));
    }
    cout << cost << endl;
    return 0;
}
