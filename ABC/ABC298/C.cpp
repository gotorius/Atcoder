#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> box(n + 1);
    map<int, set<int>> card;

    rep(qi, q) {
        int qe, i, j;
        cin >> qe;

        if (qe == 1) {
            cin >> i >> j;
            box[j].push_back(i);
            card[i].insert(j);
        } else if (qe == 2) {
            cin >> i;
            sort(box[i].begin(), box[i].end());
            for (auto p : box[i]) {
                cout << p << " ";
            }
            cout << endl;
        } else if (qe == 3) {
            cin >> i;
            for (auto p : card[i]) {
                cout << p << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
