#include <iostream>
using namespace std;
int main(){
    int Y,B,R,ver=0;
    cin >> Y >> B >> R;
    while(ver==0){
        if(Y>=B){
            Y--;
        }
        if(B>=R){
            B--;
        }
        if(R>B && B>Y){
            cout << Y+(Y+1)+(Y+2);ver++;
        } 
    }
}