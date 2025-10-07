#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	vector<vector<int>>G(N+1);
	
	for(int i=1;i<=N;i++){
		int a,b;
		cin >> a >> b;
		G[a].push_back(i);
		G[b].push_back(i);
	}

	vector<bool>ok(N+1);
	ok[0]=true;

	auto dfs=[&](auto self,int v)->void{
		ok[v]=true;
		for(auto vv:G[v])if(!ok[vv]){
			self(self,vv);
		}
	};
	
	dfs(dfs,0);
	
	int ans=0;
	for(auto x:ok)ans+=x;
	cout << ans-1 << endl;
}
