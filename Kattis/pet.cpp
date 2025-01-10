#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,aux;
    for(int i=0;i<20;i++){
        cin >> aux;
        if(i<4){
            cont1+=aux;
        }
        else if(i>=4&&i<8){
            cont2+=aux;
        }
        else if(i>=8&&i<12){
            cont3+=aux;
        }
        else if(i>=12&&i<16){
            cont4+=aux;
        }
        else if(i>=16){
            cont5+=aux;
        }
    }
    if(cont1>cont2&&cont1>cont3&&cont1>cont4&&cont1>cont5){
        cout <<"1 "<<cont1<<endl;
    }
    else if(cont2>cont3&&cont2>cont4&&cont2>cont5){
        cout <<"2 "<<cont2<<endl;
    }
    else if(cont3>cont4&&cont3>cont5){
        cout <<"3 "<<cont3<<endl;
    }
    else if(cont4>cont5){
        cout <<"4 "<<cont4<<endl;
    }
    else{
        cout <<"5 "<<cont5<<endl;
    }

    
}