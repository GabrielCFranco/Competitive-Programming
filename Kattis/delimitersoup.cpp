#include <bits/stdc++.h>
using namespace std;
int main(){
    stack <int> pilha;
    int tam;
    string simbolos;
    cin >> tam;
    cin.ignore();
    getline(cin,simbolos);
    int cont=0;
    for(char chec:simbolos){
        if(chec == '(' || chec == '[' || chec == '{'){
            pilha.push(chec);
        }
        else if(chec == ')'){
            if(pilha.empty()){
                cout << chec << " " << cont << endl;
                return 0;
            }
            else if(pilha.top()=='('){
                pilha.pop();
            }
            else{
                cout << chec << " " << cont << endl;
                return 0;
            }
        }
        else if(chec == ']'){
            if(pilha.empty()){
                cout << chec << " " << cont << endl;
                return 0;
            }
            else if(pilha.top()=='['){
                pilha.pop();
            }
            else{
                cout << chec << " " << cont << endl;
                return 0;
            }
        }
        else if(chec == '}'){
            if(pilha.empty()){
                cout << chec << " " << cont << endl;
                return 0;
            }
            else if(pilha.top()=='{'){
                pilha.pop();
            }
            else{
                cout << chec << " " << cont << endl;
                return 0;
            }
        }
        cont++;
    }
    cout << "ok so far\n";
}