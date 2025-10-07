#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int x, y, z;
    cin >> x >> y >> z;
    bool ok = true;
    int ans = 0;
    if(y >= 0 && x < 0) cout << abs(x) << endl;
    else if(y < 0 && x >= 0) cout << abs(x) << endl;
    else if(y >= 0 && x >= 0 && y > x) cout << abs(x) << endl;
    else if(y < 0 && x < 0 && y < x) cout << abs(x) << endl;
    else if(y < 0 && x < 0 && y > x && z > y && z < 0) cout << abs(x) << endl;
    else if(y < 0 && x < 0 && y > x && z > y && z >= 0) cout << abs(x) + 2 * abs(z) << endl;
    else if(y >= 0 && x >= 0 && y < x && z < y && z >= 0) cout << abs(x) << endl;
    else if(y >= 0 && x >= 0 && y < x && z < y && z < 0) cout << abs(x)+ 2*abs(z) << endl;
    else cout << -1 << endl;
    return 0;

}