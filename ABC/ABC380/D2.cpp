#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

char flip(char c){
  if('a'<=c && c<='z'){
    return (c-'a')+'A';
  }
  else{
    return (c-'A')+'a';
  }
}

int main(){
  string s;
  cin >> s;
  int q;
  cin >> q;
  for(int i=0;i<q;i++){
    if(i){cout << " ";}
    ll k;
    cin >> k;
    k--;
    ll blk=k/s.size();
    ll pt=k%s.size();
    if(__builtin_popcountll(blk)%2){
      cout << flip(s[pt]);
    }
    else{
      cout << s[pt];
    }
  }cout << "\n";
  return 0;
}
