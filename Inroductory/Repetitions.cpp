ll a, g, c, t, i, pa, pg, pc, pt;
void solve(){
	string st;
	cin >> st;
	int l = st.length();
	f0(i, l){
		if(i){
			if(st[i]=='A' && st[i-1]=='A')
				a++;
			else
				pa = max(a,pa), a=0;
			if(st[i]=='G' && st[i-1]=='G')
				g++;
			else 
				pg = max(g, pg), g=0;
			if(st[i]=='C' && st[i-1]=='C')
				c++;
			else 
				pc = max(c, pc), c=0;
			if(st[i]=='T' && st[i-1]=='T')
				t++;
			else 
				pt = max(t, pt), t=0;
		}
		pa = max(a,pa);
		pg = max(g, pg);
		pc = max(c, pc);
		pt = max(t, pt);
	}
	print(max({pa, pg, pc, pt})+1);
}
