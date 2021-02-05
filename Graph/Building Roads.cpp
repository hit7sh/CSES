void solve() {	
	int i, j, n, m, u, v;
	cin >> n >> m;
	vvi g(n+1);
 
	f1(i, m) {
		cin >> u >> v;
		g[u].EB(v);
		g[v].EB(u);
	}
 
	vi vis(n+1), ans;
 
	function<void(int)> dfs = [&](int u) {
		vis[u] = 1;
		for (int& x:g[u])
			if (!vis[x])
				dfs(x);
	};
 
	f1(i, n) {
		if (!vis[i]) {
			ans.EB(i);
			dfs(i);
		}
	}
	print(sz(ans)-1);
	for (i = 1; i < sz(ans); i++)
		print(ans[0], ans[i]);
}
