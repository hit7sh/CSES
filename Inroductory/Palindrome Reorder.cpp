void solve() {
	int i, oc = 0;
	string s;
	cin >> s;
	
	vi f(27);
 
	for (char &x:s)
		f[x^64]++;
	
 
	for (int &x:f)
		oc += x&1;
 
	if (oc > 1) {
		print("NO SOLUTION");
		return;
	}
 
	string left, mid, right;
 
	f1(i, 26) 
		if (f[i]&1)
			mid = string(f[i], i^64);
		else if (f[i])
			left += string(f[i]/2, i^64);
	cout << left << mid;
	reverse(all(left));
	cout << left;
}
