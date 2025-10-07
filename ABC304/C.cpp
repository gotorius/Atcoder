#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

double f(int x, int y, int a, int b){
    double len = sqrt((x-a)*(x-a) + (y-b)*(y-b));
    return len;
}

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> x(n);
    vector<int> y(n);
    vector<string> ans(n, "No");
    rep(i,n) cin >> x[i] >> y[i];
    ans[0] = "Yes";

    queue<int> q;
    q.push(0);
    
    while (!q.empty()) {
        int i = q.front();
        q.pop();
        rep(j, n) {
            if (ans[j] == "No" && f(x[i], y[i], x[j], y[j]) <= d) {
                ans[j] = "Yes";
                q.push(j);
            }
        }
    }
    rep(i, n) cout << ans[i] << endl;
    return 0;
}
