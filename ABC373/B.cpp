#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void) {
  int count = 0, t = 0;
  vector<char> s(30);
  vector<int> pos(30);
  string a = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  rep(i,26){
    cin >> s[i];
  }
  while(t<26){
    rep(i,26){
      if(s[i] == a[t]){
        pos[t] = i;
        t++;
        break;
      }
    }
  }

  rep(i,25){
    count = count + abs(pos[i+1]-pos[i]);
  }
  cout << count << endl;
  return 0;
}


