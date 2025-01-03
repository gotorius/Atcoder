#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    string s;
    cin >> n >> s;

    for(int i = 1; i < n; i++) {
        int cnt = 0;
        int now = 0;
        while(now+i < n){
            if(s[now] != s[now+i]){
                cnt++;
            }else{
                break;
            }
            now++;
        }
        cout << cnt << endl;
    }
    return 0;   
}