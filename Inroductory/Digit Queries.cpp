using ll = unsigned long long int;

ll pw(ll a, ll b) {
	a = 1;
	if (b == 0)
		return 1;
	for (int i = 1; i <= b; i++)
		a *= 10;
	return a;
}
 
void solve() {
	ll n, s = 9, i = 1, sm = 9;
	cin >> n;

	vector<unsigned long long> nd(20);
 
	f1(i, 19)
		nd[i] = 9*pw(10LL, i - 1)*i;
	f1(i, 19)
		nd[i] += nd[i-1];
		
	i = 1;
	while (1) {
		if (nd[i] >= n)
			break;
		i++;
	}
	n -= nd[i-1];
 
	ll temp = 9*pw(10LL, i-1)*i;
	ll z = n/i, md = n%i;
 
	if (md == 0)
		print(to_string(pw(10LL, i-1) -1 + z)[i-1]);
	else
		print(to_string(pw(10LL, i-1) - 1 + z + 1)[md - 1]);
 
}	
