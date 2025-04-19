#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int q;
    cin >> q;
    queue<int> que;
    rep(i,q){
        int num;
        cin >> num;
        if(num == 1){
            int x;
            cin >> x;
            que.push(x);
        }else if(num == 2){
            int ans = 0;
            if(!que.empty()){
                ans = que.front();
                que.pop();
                cout << ans << endl;
            }
        }
    }
    return 0;
}