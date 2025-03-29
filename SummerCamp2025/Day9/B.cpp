#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	vector<ll> pre(n+1, 0);
	for(int i = 0; i < n; ++i){
		cin >> v[i];
		pre[i+1] = pre[i] + v[i];
	}
	sort(v.begin(), v.end());
	
	vector<ll> need(n);
	vector<ll> atk(n);
	ll atk_sum = 0;
	atk[n-2] = v[n-1];
	for(int i = n - 2; i >= 0; --i){
	//	cout << "i: " << i << " ";
		atk_sum += atk[i];
	//	cout << "atk_sum: " << atk_sum << " ";
		int best_pos = -1;
		int l = 0, r = i;
		while(r - l >= 0){
			int m = (l+r)/2;
		//	cout << "r : " << r << " l: " << l << " pre: " << pre[i+1] - pre[m] << " " << m << "\n";
			if(pre[i+1] - pre[m] >= atk_sum){
				best_pos = m;
				l = m+1;
			}else{
				r = m-1;
			}
		}
		//cout << "best_pos: " << best_pos << "\n";
		if(best_pos == -1){
			// ai morre
			v[i] = 0;
		}else{
			if(best_pos - 1 >= 0){
				atk[best_pos - 1] = pre[i+1] - pre[best_pos];
		//		cout << " add_atk: " << pre[i+1] - pre[best_pos] << "\n";
			}
			i = best_pos;
		}
	}

	int ans = 0;
	for(int i = 0; i < n; ++i){
		if(v[i] == 0) ans++;
	}
	cout << n-ans << "\n";

	return 0;
}