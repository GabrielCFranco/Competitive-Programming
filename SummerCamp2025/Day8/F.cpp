// String Hashing
//
// Complexidades:
// construtor - O(|s|)
// operator() - O(1)
#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
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

const int MOD = 1e9+7;
int main(){
    string s;
    cin >> s;
    str_hash<MOD> h(s);
    vector<int> l;
    for(int i = 0; i < s.size(); ++i){
        if(h(0, i) == h(s.size() - 1 - i, s.size() - 1)){
            l.push_back(i);
        }
    }
cout << l.size() << "\n";
    for(auto it: l){
        int save = h(0, it);
        int cont = 0;
        for(int j = 0; j < s.size() - it; ++j){
            if(save == h(j, j + it)) cont++;
        }
        cout << it+1 << " " << cont << "\n";
    }
    
    return 0;
}