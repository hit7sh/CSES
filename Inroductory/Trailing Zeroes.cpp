ll count(ll n)
{
    if(n/5==0)return 0;
    return n/5+count(n/5);
}
 
 
 
void solve() {
	int n;
	cin >> n;
	cout << count(n);
}
