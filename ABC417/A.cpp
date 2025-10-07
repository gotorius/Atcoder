#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    for(int i = a; i < n-b; i++){
        cout << s[i];
    }
    cout << endl;
    return 0;
}