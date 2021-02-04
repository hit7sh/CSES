void solve() {
	int n;
	cin >> n;
	int ans = 1;
	while (n--)
		ans = ans*2 % mod;
	cout << ans;	
}
