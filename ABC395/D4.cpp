#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    unsigned n, q;
    cin >> n;

    vector<unsigned> l(n), p(n), b(n);
    iota(l.begin(), l.end(), 0);
    iota(p.begin(), p.end(), 0);
    iota(b.begin(), b.end(), 0);

    cin >> q;
    while (q--) {
        unsigned t, x, y;
        cin >> t;
        if (t == 1) {
            cin >> x >> y;
            b[x - 1] = p[y - 1];
        } else if (t == 2) {
            cin >> x >> y;
            swap(p[x - 1], p[y - 1]);
            swap(l[p[x - 1]], l[p[y - 1]]);
        } else {
            cin >> x;
            cout << l[b[x - 1]] + 1 << '\n';
        }
    }
    return 0;
}
