#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    set<string> sets;

    rep(i,n){
        cin >> s[i];
        sets.emplace(s[i]);
    }

    bool ok = true;
    set<char> set1 = {'H', 'D' , 'C' , 'S'};
    set<char> set2 = {'A' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9' , 'T' , 'J' , 'Q' , 'K'};
    rep(i,n){
        if(set1.count(s[i][0]) && set2.count(s[i][1])) continue;
        else ok = false;
    }
    if(sets.size() != n) ok = false;
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
   
}