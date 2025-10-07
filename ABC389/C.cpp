#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int q;
    cin >> q;

    vector<int> que;
    vector<int> sn;
    int outl = 0;
    int inl = 0;
    int cnt = 0;

    rep(i,q){
        int n;
        cin >> n;
        if(n == 1){
            int l;
            cin >> l;
            que.push_back(inl);
            sn.push_back(l);
            inl += l;
        }else if(n == 2){
            outl += sn[cnt];
            cnt++;
        }else if(n == 3){
            int k;
            cin >> k;
            cout << que[k-1+cnt] - outl << endl;
        }
    }
    return 0;
   
}