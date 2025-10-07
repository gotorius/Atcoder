#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    unsigned long long a;
    unsigned long long b;
    cin >> a >> b;
    if(a%b != 0) cout << a/b+1 << endl;
    else cout << a/b << endl;
    return 0;
}
