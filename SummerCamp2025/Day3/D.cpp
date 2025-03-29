#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	int n;
	cin >> n;
	vector<ll> p(1+n);
	for(int i = 1; i <= n; ++i){
		cin >> p[i];
	}

	ll pre[n+1][n+1]; 
	for(int i = 0; i <= n; ++i)
		for(int j = 0; j <= n; ++j)
			pre[i][j] = -1e17;
	for(int i = 1; i <= n; ++i){
		pre[1][i] = p[1];
	}
	for(int i = 1; i <= n-1; ++i){
		for(int j = i+1; j <= n; ++j){
			pre[j][i] = pre[j-i][i] + p[j];
		}
	}
//	for(int i = 1; i <= n; ++i){
//		for(int j = 1; j <= n; ++j){
//			cout << pre[j][i] << " " ;
//		}
//		cout << "\n";
//	}
	ll ans = -1e18;
	/*
 *	1 0 1 2
 *	1 0 2 0
 *	1 0 0 1
 * */
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= n; j += i){
			for(int k = j; k >= 0; --k){
				//cout << "i : " << i << " j: " << j << " k: " << k << " " << pre[i][j] << " " << pre[n][j-k] - pre[i][j-k] << "\n";
				if(i-k <= 0) continue;
				ans = max(ans, pre[j][i] + (pre[n][i-k] - pre[j][i-k]));
			}
		}
	}
	cout << ans << "\n";
}