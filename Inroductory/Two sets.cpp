void solve() {
	ll n, s = 0;
	vl s1, s2;
	cin >> n;
	s = n*(n+1)/2;
	if (s&1^1) {
		print("YES");
			ll sm1 = 0, sm2 = 0;
		do {
 
			if (sm1 > sm2) {
				if (n)
				s2.EB(n), sm2+=n;
			}
			else if (n)
				s1.EB(n), sm1 += n;
		} while (n--);
		print(sz(s1), s1, sz(s2), s2);
 
	} else {
		print("NO");
	}
}	
