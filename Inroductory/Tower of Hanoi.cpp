void toh(int n, int s = 1, int e = 3) {
	if (n == 1) {
		print(s, e);
		return;
	}
	int o = 6 - s - e;
	toh(n-1, s, o);
	print(s, e);
	toh(n-1, o, e);
}
 
 
void solve() {
	int n;
	cin >> n;
	print((1LL<<n)-1);
	toh(n);
}
