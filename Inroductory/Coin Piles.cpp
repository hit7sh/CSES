void solve() {
	ll x, y;
	cin >> x >> y;
 
	print((x+y) % 3 == 0 && 2*x >= y && 2*y >= x ? "YES":"NO");
}	
