#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

//1　ITP1_7_B - How Many Ways?　基本問題

int main(void){
    int n, x;
    cin >> n >> x;
    int ans = 0;
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            for(int k=j+1; k<=n; k++){
                if(i+j+k == x){
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}