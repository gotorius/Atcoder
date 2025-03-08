#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){

}

//ACL
#include <atcoder/all>
using namespace atcoder;

//modint
using mint = modint998244353;

//DSU ABC350 D問題
//ダイクストラ ABC340 D問題


//DP
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
long long dp[100010];


//DFS
void dfs(int node, vector<vector<int>>& graph, vector<bool>& visited) {
    visited[node] = true;
    cout << "訪問: " << node << endl;
    for (int next : graph[node]) {
        if (!visited[next]) {
            dfs(next, graph, visited);
        }
    }
}

//エラトステネスの篩
vector<int> eratosthenes(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}

//bfs
const int di[] = {-1,0,1,0};
const int dj[] = {0,-1,0,1};
