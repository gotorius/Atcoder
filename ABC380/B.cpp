#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string s;
    cin >> s;

    vector<int> a;
    int now = 0;
    int cnt = 0;

    while(now < s.size()-1){
        if(s[now] == '|'){
            now++;
            cnt = 0;
            while(s[now] == '-'){
                now++;
                cnt++;
            }
            a.push_back(cnt);
        }
    }
    rep(i,a.size()) cout << a[i] << ' ';
    cout << endl;
    return 0;
}
