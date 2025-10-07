#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int a;
    cin >> a;
    if(400 % a == 0) cout << 400 / a << endl;
    else cout << -1 << endl;
    return 0;

}