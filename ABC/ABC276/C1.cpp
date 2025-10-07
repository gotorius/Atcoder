#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];

    // 辞書順で 1 つ前の順列を求める
    int i = n - 1;
    while (i > 0 && p[i - 1] <= p[i]) i--;

    if (i > 0) {
        int j = n - 1;
        while (p[j] >= p[i - 1]) j--;
        swap(p[i - 1], p[j]);
    }

    reverse(p.begin() + i, p.end());

    for(int i = 0; i < n; i++) cout << p[i] << ' ';
    cout << endl;

    return 0;
}
