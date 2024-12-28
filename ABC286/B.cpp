#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    string s, t;
    cin >> s;

    int now = 0;
    while(now < s.size()){
        if(s[now] == 'n' && s[now+1] == 'a'){
            t.push_back('n');
            t.push_back('y');
            t.push_back('a');
            now += 2;
        }else{
            t.push_back(s[now]);
            now++;
        }
    }
    cout << t << endl;
    return 0;   
}
