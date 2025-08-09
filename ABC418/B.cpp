#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    string t;
    cin >> t;
    double ans = 0;
    rep(i,t.size()){
        if(t[i] == 't'){
            double k = 0;
            double cnt = 0;
            while(i+k < t.size()){
                if(t[i+k] == 't'){
                    cnt++;
                }
                k++;
                if(cnt > 2){
                    ans = max(ans, (cnt-2)/(k-2));
                }
            }
        }
    }
    printf("%.10f\n", ans);
    return 0;
}