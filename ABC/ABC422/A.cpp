#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;


ll chartoint(char s){
    int ans = s -'0';
    return ans;
}

int main(void){
    string s;
    cin >> s;
    if(s[2] != '8') cout << s[0] << '-' << chartoint(s[2])+1 << endl;
    else if(s[2] == '8') cout << chartoint(s[0])+1 << '-' << '1' << endl;
    return 0;
}