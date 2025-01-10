#include <iostream>
using namespace std;

int main(){
	int test,num,sum,total;
	cin >> test;
	for(int i=0;i<test;i++){
		cin >> num >> sum;
		int div = num/2;
		div++;
		total = sum/div;
		cout << total << endl;
	}
}