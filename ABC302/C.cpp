#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

bool f(string a, string b){
    int count = 0;
    rep(i,a.size()){
        if(a[i] != b[i]) count++;
    }
    if(count == 1) return true;
    else return false;
}

int main() {
    int n,m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    sort(s.begin(), s.end());

    do{
        rep(i,n-1){
            if(f(s[i], s[i+1])){
                if(i == n-2){
                    cout << "Yes" << endl;
                    return 0;
                }
            }else{
                break;
            }
        }
    }while(next_permutation(s.begin(), s.end()));
    
    cout << "No" << endl;
    return 0;
}
