#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int barbs[10], marcres=0, mardecres=0;
        for(int j=0;j<10;j++){
            cin >> barbs[j];
        }
        for(int j=0;j<9;j++){
            if(barbs[j]<barbs[j+1])marcres++;
            else if(barbs[j]>barbs[j+1])mardecres++;
        }         
        if(i==0) cout << "Lumberjacks:" << endl;
        if(marcres==9||mardecres==9) cout << "Ordered" << endl;
        else cout <<"Unordered" << endl;
    }
}