#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    string s;
    cin >> s;
    int now = 0;
    
    while(s[now] == 'A') now++;
    while(s[now] == 'B') now++;
    while(s[now] == 'C') now++;

    if(now == s.size()) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}