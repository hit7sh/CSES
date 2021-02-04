void solve() {
	ll x, y, ans; 
	cin >> x >> y;
	if (x < y) {
		if (y&1)
			ans = y*y - x + 1;
		else
			ans = (y-1)*(y-1) + x;
	} else {
		if (x&1)
			ans = (x-1)*(x-1) + y;
		else
			ans = x*x - y + 1;
	}
	cout << ans << endl;
}
