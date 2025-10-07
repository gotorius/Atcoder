#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n+1,1);
    map<int,int> mp;
    rep(i,n) mp[i+1] = i+1;
    int ans = 0;
    rep(i,q){
        int num;
        cin >> num;
        if(num == 1){
            int p, h;
            cin >> p >> h;
            a[mp[p]]--;
            mp[p] = h;
            a[mp[p]]++;

        }else if(num == 2){
            vector<int> s = a;
            sort(s.begin(),s.end());
            auto it = lower_bound(s.begin(),s.end(), 2);
            int count = distance(it, s.end());
            cout << count << endl;
        }
    }
   
}