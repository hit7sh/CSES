int n, m, i, j;
vector<string> S(1001);
vi par(int(1e6) + 5, -1);
bool move(int x, int y) {
	return x>=0 && y>=0 && x<n && y<m && S[x][y] == '.'; 
}
	queue<pii> q;
 
void solve() {	
	cin >> n >> m;
	S.resize(n);
	cin >> S;
 
	pii s, e;
 
	f0(i, n)
		f0(j, m)
			if (S[i][j] == 'A')
				s = {i, j}, S[i][j] = '#';			
			else if (S[i][j] == 'B')
				e = {i, j}, S[i][j] = '.';			
 
	q.push(s);
	
 
	while (sz(q)) {
		auto [x, y] = q.front();
		q.pop();
		if (e == make_pair(x, y))
			break;
		
 
		if (move(x-1, y))
			q.push({x-1, y}), par[m*(x-1) + y] = m*x + y, S[x-1][y] = '#';
		if (move(x, y-1))
			q.push({x, y-1}), par[m*(x) + y-1] = m*x + y, S[x][y-1] = '#';
		if (move(x+1, y))
			q.push({x+1, y}), par[m*(x+1) + y] = m*x + y, S[x+1][y] = '#';
		if (move(x, y+1))
			q.push({x, y+1}), par[m*(x) + y+1] = m*x + y, S[x][y+1] = '#';
	}
 
	string moves;
	
	if (par[m*e.F + e.S] == -1) {
		print("NO");
		return;
	}
 
	while (e != s) {
		int u = m*e.F + e.S;
		int x = par[u]/m, y = par[u] % m;
		pii tp = {x, y};
		if (tp.F + 1 == e.F)
			moves += "D";
		else if (tp.F - 1 == e.F)
			moves += "U";
		else if (tp.S + 1 == e.S)
			moves += "R";
		else
			moves += "L";
		e = tp;
	}
 
	print("YES");
	print(sz(moves));
	reverse(all(moves));
	print(moves);
}
