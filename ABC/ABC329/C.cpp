#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;


int main(void){
   string abc = {"abcdefghijklmnopqrstuvwxyz"};
   vector<int> cnt(27, 0);
   int n, sum=0, count=0;
   string s;
   cin >> n >> s;
   rep(i,27){
      rep(j,n){
         if(s[j] == abc[i]){
            while(s[j] == abc[i]){
               count++;
               j++;
            }
            cnt[i] = max(cnt[i], count);
            count = 0;
         }
      }
      sum += cnt[i];
   }
   cout << sum << endl;

}
