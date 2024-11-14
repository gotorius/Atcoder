#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void) {

  char ab, ac, bc;
  cin >> ab >> ac >> bc;

  if((ab=='>' && ac=='<') || (ac=='>' && ab=='<')){
    cout << "A" << endl;
  }else if((ab=='<' && bc=='<') || (bc=='>' && ab=='>')){
    cout << "B" << endl;
  }else{
    cout << "C" << endl;
  }
  return 0;
}

