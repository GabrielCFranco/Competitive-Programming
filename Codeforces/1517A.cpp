#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        long long int input,total=0,esp=2050;
        cin >> input;
        if(input < 2050) cout << "-1" << endl;
        else{
            while(input/esp > 9){
                esp*=10;
            }
            while(esp >= 2050 && input !=0){
                total += input/esp;
                input = input%esp;
                esp/=10;
            }
            if(input == 0){
                cout << total << endl;
            }
            else cout << "-1" << endl;
        }
    }
    return 0;
}