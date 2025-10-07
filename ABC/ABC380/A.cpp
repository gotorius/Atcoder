#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string s;
    cin >> s;
    int a = 0, b = 0, c = 0;

    rep(i,s.size()){
        if(s[i] == '1'){
            a++;
        }else if(s[i] == '2'){
            b++;
        }else if(s[i] == '3'){
            c++;
        }
    }

    if(a == 1 && b == 2 && c == 3){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;   
}
