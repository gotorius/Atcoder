#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main() {
   int n, q;
   cin >> n >> q;
   vector<char> h(q);
   vector<int> t(q);
   rep(i, q) cin >> h[i] >> t[i];

   int lnow = 1;  // 左ポインタ
   int rnow = 2;  // 右ポインタ
   int ans = 0;   // 合計の移動回数

   rep(i, q) {
      int llcount = 0;  // 左ポインタを左回りに移動する回数
      int lrcount = 0;  // 左ポインタを右回りに移動する回数
      int rlcount = 0;  // 右ポインタを左回りに移動する回数
      int rrcount = 0;  // 右ポインタを右回りに移動する回数

      if (h[i] == 'L') {
         // 左ポインタをt[i]に動かす場合
         int llnow = lnow;
         int lrnow = lnow;

         // 左回りでの移動
         while (llnow != t[i]) {
            if (llnow == 1) {
               llnow = n;
            } else {
               llnow--;
            }
            llcount++;
            if (llnow == rnow) {
               llcount = 100;  // 左ポインタと右ポインタがぶつかる場合
               break;
            }
         }

         // 右回りでの移動
         while (lrnow != t[i]) {
            if (lrnow == n) {
               lrnow = 1;
            } else {
               lrnow++;
            }
            lrcount++;
            if (lrnow == rnow) {
               lrcount = 100;  // 左ポインタと右ポインタがぶつかる場合
               break;
            }
         }

         // 少ない方の回数で移動し、左ポインタを更新
         if (llcount <= lrcount) {
            ans += llcount;
            lnow = t[i];
         } else {
            ans += lrcount;
            lnow = t[i];
         }

      } else {
         // 右ポインタをt[i]に動かす場合
         int rlnow = rnow;
         int rrnow = rnow;

         // 左回りでの移動
         while (rlnow != t[i]) {
            if (rlnow == 1) {
               rlnow = n;
            } else {
               rlnow--;
            }
            rlcount++;
            if (rlnow == lnow) {
               rlcount = 100;  // 右ポインタと左ポインタがぶつかる場合
               break;
            }
         }

         // 右回りでの移動
         while (rrnow != t[i]) {
            if (rrnow == n) {
               rrnow = 1;
            } else {
               rrnow++;
            }
            rrcount++;
            if (rrnow == lnow) {
               rrcount = 100;  // 右ポインタと左ポインタがぶつかる場合
               break;
            }
         }

         // 少ない方の回数で移動し、右ポインタを更新
         if (rlcount <= rrcount) {
            ans += rlcount;
            rnow = t[i];
         } else {
            ans += rrcount;
            rnow = t[i];
         }
      }
   }

   cout << ans << endl;
   return 0;
}
