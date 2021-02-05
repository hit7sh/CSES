vi p(mxN), vis(mxN);
vvi adj(mxN);

void dfs(int u, int pu) {
	p[u] = pu;
		vi ans;
		vis[u] = 1;
		for (int v : adj[u]) {
			if (v == pu)
				continue;
			if (vis[v]) {
				int t = u;
				while (u^v) {
					ans.EB(u);
					u = p[u];
				}
				ans.EB(v);
				ans.EB(t);
				print(sz(ans), ans);
				exit(0);
			} else
				dfs(v, u);
		}
}


void solve() {	
	int n, m, u, v, i;
	cin >> n >> m;
	
	while (m--) {
		cin >> u >> v;
		adj[u].EB(v);
		adj[v].EB(u);
	}
	
	
	f1(i, n)
		if (!vis[i])
			dfs(i, -1);
	cout << "IMPOSSIBLE";
}

