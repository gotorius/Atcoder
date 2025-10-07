#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string s;
    cin >> s;

    int m = s.size();
    int cnt = 0;
    int now = 0;
    while(now < m){
        if(s[now] == '0' && s[now+1] == '0'){
            cnt++;
            now += 2;
        }else{
            cnt++;
            now++;
        }
    }
    cout << cnt << endl;
    return 0;
   
}