#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    string s;
    cin >> s;

    int n = s.size();
    int now = n-1;
    while(now > 0){
        if(s[now] == 'A' && s[now-1] == 'W'){
            s[now] = 'C';
            s[now-1] = 'A';
            now--;
        }else{
            now--;
        }
    }
    cout << s << endl;
    return 0;
}
