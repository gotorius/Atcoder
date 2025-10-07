#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int m;
    cin >> m;
    vector<string> s(3);
    rep(i,3) cin >> s[i];
    vector<int> a = {0,1,2};

    int ans = 1001001001;
    do{
        rep(num,10){
            int cnt = 0;
            rep(i,3){
                rep(j,m){
                    int x = s[a[i]][(cnt+j)%m] - '0';
                    if(x == num){
                        cnt++;
                        break;
                    }else{
                        cnt++;
                    }
                }
            }
            ans = min(ans,cnt);
        }
    }while(next_permutation(a.begin(),a.end()));

    cout << ans << endl;
    return 0;
}