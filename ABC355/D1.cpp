#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> l(N), r(N);

    for (int i = 0; i < N; i++) {
        cin >> l[i] >> r[i];
    }
    sort(l.begin(), l.end());
    sort(r.begin(), r.end());
    long long ans = 1LL * N * (N - 1) / 2;

    int j = 0;
    for (int i = 0; i < N; i++) {
        while (j < N && r[j] < l[i]) {
            j++;
        }
        ans -= j;
    }

    cout << ans << endl;
    return 0;
}
