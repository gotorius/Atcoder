#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    string s = to_string(n);
    cout << s[1] << s[2] << s[0]<< ' ';
    cout << s[2] << s[0] << s[1] << endl;
}
