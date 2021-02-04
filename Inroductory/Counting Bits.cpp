void solve() {
	ll n, i, ans = 0;
	cin >> n;
	n+=1;
	for (i = 1; i < 63; i++) {
		ll bit = 1LL << i;

		ll ones = (n/bit)*(bit/2);
    
		if (n%bit > bit/2)
			ones += n%bit - bit/2;
      
		ans += ones;
	}
	print(ans);
}
