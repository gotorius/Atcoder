#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(void){
  int n, i, j;
  cin >> n;
  vector<int> a(n);
  vector<int> w(n);
  vector<int> max_weight(n);
  for(i=0; i<n; i++){
    cin >> a[i];
  }
  for(i=0; i<n; i++){
    cin >> w[i];
  }


  for(i=0; i<n; i++){
    a[i]--;
    max_weight[a[i]] = max(max_weight[a[i]], w[i]);
  }

  const int sum_w = accumulate(w.begin(), w.end(), 0);
  const int sum_max = accumulate(max_weight.begin(), max_weight.end(), 0);


  cout << sum_w - sum_max  << endl;

  return 0;
}