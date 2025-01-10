#include <iostream>
using namespace std;

int main(){
	int test,stick,dim;
	cin >> test;
	for(int i=0;i<test;i++){
		int restoini, restofim,total;
		cin >> stick >> dim;
		if(stick==0||dim==0) cout << "0" << endl;
		else if(stick==dim){
			if(dim%3==0){
				total = (dim/3) * 2;
				cout << total<< endl;
			}
			else if((dim-1)%3==0){
				total = (dim/3) * 2;
				cout << total<< endl;
			}
			else if((dim-2)%3==0){
				total= (dim/3) * 2 + 1;
				cout << total<< endl;
			}	
		}
		else if(stick>dim){
			if(stick>2*dim){
				cout << dim << endl;
			}
			else{
				restoini = stick-dim;
				restofim = dim - restoini;
				if(restofim%3==0){
					total = (restofim/3) * 2 + restoini;
					cout << total<< endl;
				}
				else if((restofim-1)%3==0){
					total = (restofim/3) * 2 + restoini;
					cout << total<< endl;
				}
				else if((restofim-2)%3==0){
					total= (restofim/3) * 2 + 1 + restoini;
					cout << total<< endl;
				}
			}
		}	
		else if(dim>stick){
			if(dim>2*stick){
				cout << stick << endl;
			}
			else{
				restoini = dim-stick;
				restofim = stick - restoini;
				if(restofim%3==0){
					total = (restofim/3) * 2 + restoini;
					cout << total<< endl;
				}
				else if((restofim-1)%3==0){
					total = (restofim/3) * 2 + restoini;
					cout << total<< endl;
				}
				else if((restofim-2)%3==0){
					total= (restofim/3) * 2 + 1 + restoini;
					cout << total<< endl;
				}
			}
		}
	}
}