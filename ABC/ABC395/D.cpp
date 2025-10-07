#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;

int main(void){
    int n, q;
    cin >> n >> q;

    vector<set<T>> move(n);
    rep(i,n){
        move[i].insert(T(-1,i,0));
    }

    rep(i,q){
        int num;
        cin >> num;
        if(num == 1){
            int a, b;
            cin >> a >> b;
            a--,b--;
            move[a].insert(T(i,b,1));
        }
        else if(num == 2){
            int a, b;
            cin >> a >> b;
            a--,b--;
            move[a].insert(T(i,b,2));
            move[b].insert(T(i,a,2));
        }else if(num == 3){
            int a;
            cin >> a;
            a--;
            int ans;
            for(auto p : move[a]){
                if(get<2>(p) == 1) ans = get<1>(p);
                else if(get<2>(p) == 2){
                    swap(move[a],move[ans]);
                    ans = get<1>(p);
                }
            }
            cout << ans+1 << endl;
        }
    }
    return 0;

}
