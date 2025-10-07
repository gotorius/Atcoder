#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

//34　ALDS_10_A - フィボナッチ数　超基本。「DP とは何か」を感じることができます。

int main() {
    int n;
    cin >> n;

    vector<int> memo(n + 1, -1);
    function<int(int)> f = [&](int x) {
        if (x == 0 || x == 1) return 1;
        if (memo[x] != -1) return memo[x];
        return memo[x] = f(x - 1) + f(x - 2);
    };
    cout << f(n) << endl;
    return 0;
}
