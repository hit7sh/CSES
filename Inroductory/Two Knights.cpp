void solve() {
	ll n, ans = 0, i;
	cin >> n;
 
	f1(i, n) {
		ll a1 = i*i, a2 = a1*(a1-1)/2;
		if (i > 2)
			a2 -= 4*(i-1)*(i-2);
		print(a2);
	}
}	
