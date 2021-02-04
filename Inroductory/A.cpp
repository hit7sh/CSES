void solve(){
	ll n;
	cin >> n;
	cout << n << ' ';
	if(n==1)
		return;
	while(n!=1){
		if(n&1^1)
			n/=2;
		else 
			n=n*3+1;
		cout << n << ' ';
		if(n==1)
			return;
	}
	cout << "1";
}
