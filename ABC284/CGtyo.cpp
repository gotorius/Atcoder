#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> num(n);
    iota(num.begin(), num.end(), 1);  // 1からnまでの数を生成

    vector<int> uk, vk;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        // numからuとvを削除
        auto it = find(num.begin(), num.end(), u);
        if (it != num.end()) num.erase(it);
        it = find(num.begin(), num.end(), v);
        if (it != num.end()) num.erase(it);

        // ukとvkの処理
        if (uk.empty() || find(uk.begin(), uk.end(), u) == uk.end()) {
            vk.push_back(v);
            if (find(vk.begin(), vk.end(), u) == vk.end()) {
                uk.push_back(u);
            }
        } else {
            vk.push_back(v);
        }
    }

    cout << uk.size() + num.size() << endl;

    return 0;
}
