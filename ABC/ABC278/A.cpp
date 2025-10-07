#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, k;
    cin >> n >> k;

    queue<int> que;
    rep(i,n){
        int a;
        cin >> a;
        que.push(a);
    }

    rep(i,k){
        que.pop();
        que.push(0);
    }

    while(!que.empty()){
        cout << que.front() << ' ';
        que.pop();
    }
    cout << endl;
    return 0;   
}
