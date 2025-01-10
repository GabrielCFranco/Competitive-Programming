#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    for(int i=0;i<n;i++){
        list<char> lista;
        list<char>::iterator iterador=lista.begin();
        string frase;
        getline(cin,frase);
        for(char caracter:frase){
            if(caracter == '['){
                iterador = lista.begin();
            }
            else if(caracter == ']'){
                iterador = lista.end();
            }   
            else if(caracter == '<'){
                if(!lista.empty() && iterador!=lista.begin()){
                    iterador = lista.erase(--iterador);
                }
            }
            else{
                iterador = lista.insert(iterador,caracter);
                iterador++;
            }
        }
        for(char caracter:lista){
            cout << caracter;
        }
        cout << "\n";
        lista.clear();
    }
    return 0;
}