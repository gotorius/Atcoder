#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void) {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    
    vector<int> x(q);
    vector<char> c(q);
    rep(i, q) cin >> x[i] >> c[i];

    int count = 0;
    rep(i, n-2) {
        if (s.substr(i, 3) == "ABC") {
            count++;
        }
    }
    rep(i, q) {
        int pos = x[i] - 1;
        for (int j = max(0, pos - 2); j <= min(n - 3, pos); j++) {
            if (s.substr(j, 3) == "ABC") {
                count--;
            }
        }
        s[pos] = c[i];
        for (int j = max(0, pos - 2); j <= min(n - 3, pos); j++) {
            if (s.substr(j, 3) == "ABC") {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}