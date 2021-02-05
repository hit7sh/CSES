bool possible(int x, int y) {
	return x < n && x >= 0 && y < m && y >= 0 && s[x][y] == '.';
}
 
 
void solve() {
	
	cin >> n >> m;
	s.resize(n);
	cin >> s;
	
	function<void(int, int)> dfs = [&](int x, int y) {
		s[x][y] = '#';
		if (possible(x-1, y))
			dfs(x-1, y);
		if (possible(x, y-1))
			dfs(x, y-1);
		if (possible(x+1, y))
			dfs(x+1, y);
		if (possible(x, y+1))
			dfs(x, y+1);
	};
 
 
	int ans = 0;
 
	f0(i, n)
		f0(j, m)
			if (s[i][j] == '.') {
				ans++;
				dfs(i, j);
			}
	print(ans);
}
