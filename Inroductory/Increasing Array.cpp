ll A[200005];
void solve(){
	ll n, ans = 0;cin >> n;
	for(int i = 0; i<n; i++){
		cin >> A[i];
		if(i)
			if(A[i]<A[i-1])
				ans+= A[i-1]-A[i], A[i] = A[i-1];
	}
	cout << ans << endl;
 
}
