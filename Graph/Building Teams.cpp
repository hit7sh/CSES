void solve() {	
	int i, j, n, m, u, v;
	cin >> n >> m;
	vvi g(n+1);
 
	f1(i, m) {
		cin >> u >> v;
		g[u].EB(v);
		g[v].EB(u);
	}
 
	vi col(n+1);
	
	bool ok = 1;
 
	function<void(int)> dfs= [&](int u) {
		for (int& x : g[u]) {
			if (col[x] == col[u]) {
				ok = 0;
			}
			if (!col[x]) {
				col[x] = col[u]^1;
				dfs(x);
			}
		}
	};
 
	f1(i, n)
		if (!col[i])
			col[i] = 2, dfs(i);
 
	if (!ok) 
		print("IMPOSSIBLE");
	else
		f1(i, n)
			cout << col[i] - 1 << ' ';
}
 
 
