void solve() {
	ll n, s1, s2, ans = inf;
	cin >> n;
	vl A(n);
	cin >> A;
 
	for (int mask = 0; mask < (1<<n); mask++) {
		s1 = s2 = 0;
		for (int i = 0; i < n; i++)
			if ((1<<i) & mask)
				s1 += A[i];
			else
				s2 += A[i];
		cmin(ans, abs(s1 - s2));
	}
	print(ans);
}	
