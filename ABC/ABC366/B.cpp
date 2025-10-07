#include <bits/stdc++.h>
using namespace std;
int main() {
  
    int N;
    int i;
    cin >> N;
    vector<string> s(N);
    
    for(i=0; i<N; i++){
      cin >> s[i];
    }
    
    int m = 0;
    for(i=0; i<N; i++){
      m = max(m, (int)s[i].size());
    }
    
    vector<string> T(m, string(N, '*'));
    for(i=0; i<N; i++){
      for(int j=0; j<s[i].size(); j++){
        T[j][N-1-i] = s[i][j];
      }
    }
    
    for(i=0; i<m; i++){
      while(T[i].back() =='*'){
        T[i].pop_back();
      }
      cout << T[i] << endl;
    }
    return 0;
}
    