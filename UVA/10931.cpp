#include <bits/stdc++.h>
using namespace std;
int main(){
    int i;
    while(i!=0){
        cin >> i;
        if(i==0) break;
        int aux,marc=0;
        aux = i;
        string binario;
        while(aux>0){
            binario += to_string(aux%2);
            aux/=2;
        }
        reverse(binario.begin(), binario.end());
        for(int j=0;j<binario.length();j++){
            if(binario[j]=='1'){
                marc++;
            }
        }
        cout<<"The parity of " << binario << " is " << marc <<" (mod 2)." << endl;
    }
}