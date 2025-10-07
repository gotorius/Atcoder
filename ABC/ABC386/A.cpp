#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    map<int,int> m;
    m[a]++;
    m[b]++;
    m[c]++;
    m[d]++;

    if(m.size() == 2){
        cout << "Yes" << endl;
        return 0;
    }else{
        cout << "No" << endl;
        return 0;
    }

   
}