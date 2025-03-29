#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
    if(n%k == 0){
        cout << n + (k-1) * (n/k) << "\n";
        // 6 + 
    }else{
        cout << k*(n-1) << "\n";
    }
}