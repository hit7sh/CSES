void solve() {	
	int i, j, n, m, u, v;
	cin >> n >> m;
	vvi g(n+1);
 
	f1(i, m) {
		cin >> u >> v;
		g[u].EB(v);
		g[v].EB(u);
	}
 
	vi par(n+1, -1), vis(n+1), dist(n+1);
	queue<int> q;
	q.push(1);
	vis[1] = 1;
 
	while (sz(q)) {
		int tp = q.front();
		q.pop();
		
		for (int& x:g[tp])
			if (!vis[x]) {
				q.push(x);
				vis[x] = 1;
				dist[x] = dist[tp] + 1;
				par[x] = tp;
			}
	}
	// print(par);
	if (!vis[n])
		print("IMPOSSIBLE");
	else {
		print(dist[n]+1);
 
		vi path;
		path.EB(n);
		int cur = n;
		while (cur != 1) {
			path.EB(par[cur]);
			cur = par[cur];
		}
		reverse(all(path));
		print(path);
	}
}
 
