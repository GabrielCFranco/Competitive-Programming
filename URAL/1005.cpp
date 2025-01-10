#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main(){
    ll aux,tot=100001,loop,t;
    vector<int> stones;
    cin >> t;
    if(t==1){
        cin >> aux;
        cout << aux << endl;
    }
    else{
        for(int i=0;i<t;i++){
            cin >> aux;
            stones.push_back(aux);
        }
        loop=pow(2,t);
        int i=0;
        while(i<loop){
        string bin = bitset<20>(i).to_string();
        int cont1=0,cont2=0,j=0;
        while(j<t){
            if(bin[19-j]=='1'){
                cont2+=stones[j];
            }
            else cont1+=stones[j];
            j++;
        }
        if(abs(cont1-cont2)<tot) tot = abs(cont1-cont2);
        i++;
    }
    cout << tot << endl;
    }
    
}