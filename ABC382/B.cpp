#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, d;
    string s;
    cin >> n >> d >> s;

    int id = 0;
    for(int i=n-1; i>=0; i--){
        if(s[i] == '@'){
            s[i] = '.';
            id++;
        }
        if(id == d){
            break;
        }
    }
    cout << s << endl;
    return 0;
   
}