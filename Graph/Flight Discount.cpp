 
void solve() {	
	int n, m, u, v, w;
	cin >> n >> m;
	vector<vector<pair<ll, ll>>> adj(n+1);
	while (m--) {
		cin >> u >> v >> w;
		adj[u].EB(v, w);
	}
	vvi vis(n+1, vi(2));
	vector<vl> dist(n+1, vl(2));
 
	priority_queue<array<ll, 3>, vector<array<ll, 3>>, greater<array<ll, 3>>> pq;
	pq.push({0, 1, 0}); // {dist, vertex, used/not used discount
 
	while (!pq.empty()) {
		auto [pd, p, f] = pq.top();
		pq.pop();
 
		if (vis[p][f])
			continue;
 
		vis[p][f] = 1;
		dist[p][f] = pd;
 
		for (int i : {0, 1}) {
			if (i < f)
				continue;
			for (auto& [ch, cw] : adj[p]) {
				if (i > f)
					pq.push({cw/2 + pd, ch, i}); // use coupon now
				else
					pq.push({cw + pd, ch, i});
			}
		}
	}
	cout << dist[n][1];
}
 
 
