#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
const int MOD = 1e9+7;
mt19937 rng((int) chrono::steady_clock::now().time_since_epoch().count());
int uniform(int l, int r) {
	uniform_int_distribution<int> uid(l, r);
	return uid(rng);
}
template<int MOD> struct str_hash { // 116fcb
	static int P;
	vector<ll> h, p;
	str_hash(string s) : h(s.size()), p(s.size()) {
		p[0] = 1, h[0] = s[0];
		for (int i = 1; i < s.size(); i++)
			p[i] = p[i - 1]*P%MOD, h[i] = (h[i - 1]*P + s[i])%MOD;
	}
	ll operator()(int l, int r) { // retorna hash s[l...r]
		ll hash = h[r] - (l ? h[l - 1]*p[r - l + 1]%MOD : 0);
		return hash < 0 ? hash + MOD : hash;
	}
};
template<int MOD> int str_hash<MOD>::P = uniform(256, MOD - 1); // l > |sigma|
void solve()
{
    string s,p;
    cin >> s >> p;
    str_hash<MOD> hs(s);
    str_hash<MOD> hp(p);
    int ans=0;
    for(int i=0;i<(int)(s.length()-p.length()+1);i++)
    {
        if(hp(0,p.length()-1)==hs(i,i+p.length()-1))ans++;
    }
    cout << ans << "\n";
}
int main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}