#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    map<char, int> len;
    len['A'] = 0;
    len['B'] = 3;
    len['C'] = 4;
    len['D'] = 8;
    len['E'] = 9;
    len['F'] = 14;
    len['G'] = 23;

    char p,q;
    cin >> p >> q;
    cout << abs(len[p] - len[q]) << endl;
    return 0;

}
