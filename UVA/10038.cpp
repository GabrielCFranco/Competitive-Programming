#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> v, cpy;
	int aux, n;
	
	while (cin >> n) {
		for (int i = 0; i < n;i++) {
			cin >> aux;
			v.push_back(aux);	
		}
		
		for (int i = 0; i < n - 1;i++) {
			cpy.push_back(abs(v[i] - v[i+1]));	
		}
		
		sort(cpy.begin(), cpy.end());
		
		bool flag = true;
		for (int i = 0; i < n - 1;i++) {
			if (cpy[i] != i+1) {
				flag = false;
				break;
			}
		}
		
		if (flag) cout << "Jolly\n";
		else cout << "Not jolly\n";
		
		v.clear();
		cpy.clear();
	}
	
	return 0;
}