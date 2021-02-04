void solve() {
	string s;
	cin >> s;
	sort(all(s));
	vector<string> ans;
 
	do ans.EB(s);
	while (next_permutation(all(s)));
 
	print(sz(ans), ans);
}
