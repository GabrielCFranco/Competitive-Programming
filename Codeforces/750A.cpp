#include <iostream>
using namespace std;

int main(){
	
    int n,k,contador=0;
    cin >> n >> k;
    
    for( int i = 1; i <= n; i++){
    	if( k+(5*i) <= 240 ){
    		contador++;
    		k+=(5*i);
		}
	}
    
    cout << contador << endl;

}