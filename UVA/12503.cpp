#include<bits/stdc++.h>
using namespace std;
int main(){
	string comando;
	int n,aux,r;
	cin >> n;
	int passados[101];
	for(int i=0;i<n;i++){
		int direc=0;
		cin >> r;
		for(int j=0;j<r;j++){
			cin >> comando;
			if(comando == "SAME"){
				cin >> comando >> aux;
				direc +=passados[aux-1];
				passados[j] = passados[aux-1];
			}
			else if(comando == "RIGHT"){
				direc++;
				passados[j]=1;
			}
			else if(comando == "LEFT"){
				direc--;
				passados[j]=-1;
			}		
		}
		cout << direc << "\n";
	}
}