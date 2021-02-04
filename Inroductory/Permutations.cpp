void solve(){//A
	int n;
	cin >> n;
	if(n==1){
		print(1);
		return;
	}
	if(n==4){
		print("2 4 1 3");
		return;
	}
	if(n<4){
		print("NO SOLUTION");
		return;
	}
 
	int i;
	for(i=1;i<=n;i+=2)
		cout << i << ' ';
	i%=n;
	i+=i&1;
	for(;i<=n;i+=2)
		cout << i << ' '; 
	
}
