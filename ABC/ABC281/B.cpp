#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    char a;
    int b;
    char c;

    if (!(cin >> a >> b >> c)) {
        cout << "No" << endl;
        return 0; // 入力エラー時に終了
    }

    if(isupper(a) && isupper(c) && 100000 <= b && 999999 >= b){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}

