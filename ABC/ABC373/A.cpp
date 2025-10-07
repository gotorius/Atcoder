#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void) {
  int count = 0;
  vector<string> s(13);
  rep(i,12){
    cin >> s[i];
    if(s[i].size() == i+1){
      count++;
    }
  }
  cout << count << endl;
}


