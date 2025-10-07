#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    string s;
    cin >> n >> s;
    if(s[n-3] == 't' && s[n-2] == 'e' && s[n-1] == 'a'){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}