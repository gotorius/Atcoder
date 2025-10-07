#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;

int main(void){
    int n, q;
    cin >> n >> q;

    vector<int> h(n);
    vector<int> r(n);
    map<int,int> s;

    rep(i,n) h[i] = i, r[i] = i, s[r[i]] = i;

    rep(i,q){
        int num;
        cin >> num;
        if(num == 1){
            int a, b;
            cin >> a >> b;
            a--,b--;
            h[a] = b;
        }
        else if(num == 2){
            int a, b;
            cin >> a >> b;
            a--,b--;
            int tmp = s[r[a]];
            s[r[a]] = s[r[b]];
            s[r[b]] = tmp;
            swap(r[a], r[b]);
        }else if(num == 3){
            int a;
            cin >> a;
            a--;
            cout << s[r[h[a]]]+1 << endl;
        }
    }
    return 0;

}
