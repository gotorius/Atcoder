#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    string s;
    cin >> s;
    vector<P> a;
    int first = -1, second = -1;
    rep(i,s.size()){
        if(s[i] == '#'){
            if(first == -1) {
                first = i+1;
            }else{
                second = i+1;
                a.push_back({first, second});
                first = -1;
                second = -1;
            }
        }
    }
    for(auto p : a){
        cout << p.first << "," << p.second << endl;
    }
    return 0;
}