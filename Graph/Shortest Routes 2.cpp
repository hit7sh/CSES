void solve() {	
	ll i, j, n, m, q, u, v, w;
	cin >> n >> m >> q;
	vector<vector<ll>> d(n, vl(n, inf));
	f0(i, n)
		d[i][i] = 0;
 
	f1(i, m) {
		cin >> u >> v >> w;
		--u, --v;
		cmin(d[u][v], w);
		cmin(d[v][u], w);
	}
	for (int k = 0; k < n; ++k) {
	    for (int i = 0; i < n; ++i) {
	        for (int j = 0; j < n; ++j) {	
	            if (d[i][k] < inf && d[k][j] < inf)
                	d[i][j] = min(d[i][j], d[i][k] + d[k][j]); 
	        }
	    }
	}
	while (q--) {
		cin >> u >> v;
		--u, --v;
		print(d[u][v] == inf? -1:d[u][v]);
	}
}
 
 
