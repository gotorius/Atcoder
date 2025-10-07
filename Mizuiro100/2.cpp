#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

//2　AtCoder Beginner Contest 106 B - 105

int main(void){
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        int cnt = 0;
        for(int j = 1; j <= n; j++){
            if(i % j == 0) cnt++;
        }
        if(cnt == 8 && i % 2 == 1) ans++;
    }
    cout << ans << endl;
    return 0;
}