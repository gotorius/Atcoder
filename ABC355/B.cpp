#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(M);
    for (auto& x : A) cin >> x;
    for (auto& x : B) cin >> x;

    auto C = A;
    for (auto x : B) C.push_back(x);
    sort(C.begin(), C.end());

    set<int> st(A.begin(), A.end());

    for (int i = 0; i < N + M - 1; ++i) {
        if (st.contains(C[i]) && st.contains(C[i + 1])) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
