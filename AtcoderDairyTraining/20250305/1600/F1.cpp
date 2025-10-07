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

    int ans = 1001001001;

    vector<int> perm = {0, 1, 2};

    do{
        rep(num,10){
            int cnt = 0;
            bool found = true;
            rep(i,3){
                bool num_found = false;
                rep(j,m){
                    int x = s[perm[i]][(cnt)%m] - '0';
                    if(x == num){
                        cnt++;
                        num_found = true;
                        break;
                    }else{
                        cnt++;
                    }
                }
                if(!num_found){
                    found = false;
                    break;
                }
            }
            if(found){
                ans = min(ans,cnt);
            }
        }
    }while(next_permutation(perm.begin(), perm.end()));

    if(ans == 1001001001){
        cout << -1 << endl;
    }else{
        cout << ans-1 << endl;
    }
    return 0;
}