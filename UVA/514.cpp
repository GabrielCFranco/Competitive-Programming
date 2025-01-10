#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=1;
    cin >> n;
    while(n!=0){
        stack<int>pilha;
        vector<int>input;
        int aux,cont=1,index=0,cheque=0;
        for(int i=0;i<n;i++){
            cin >> aux;
            if(aux == 0){
                cout << "\n";
                cin >> n;
                if (n==0){
                    return 0;
                }
                else{
                    cin >> aux;
                }
            }
            input.push_back(aux);
        }
        while(index <= n-1){
            if(!pilha.empty()){
                if(pilha.top()==input[index]){
                    pilha.pop();
                    index++;
                    cheque=0;
                }
                else{
                    if(cont<=n){
                        pilha.push(cont);
                        cont++;
                    }  
                cheque++;
                } 
            }
            else{
                if(cont<=n){
                    pilha.push(cont);
                    cont++;
                }     
            }     
            if(cheque>n){
                cout << "No\n";
                break;
            }
        }
        if(index==n) cout <<"Yes\n";
    }
}