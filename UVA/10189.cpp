#include <iostream>
using namespace std;
int main(){
    int l=1,c=1,field=1;
        while(l!=0&&c!=0){
        cin >> l >> c;
        if(l==0&&c==0){
            return 0;
        }
        char matrix[l][c];
        for(int i=0;i<l;i++){
            for(int j=0;j<c;j++){
                cin >> matrix[i][j];
            }
        }
        for(int i=0;i<l;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]!='*') matrix[i][j] = '0';
            }
        }
        if(field>1){
            cout << endl;
        }
        for(int i=0;i<l;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]!='*'){
                if(j!=0){
                        if(matrix[i-1][j-1]=='*'&& i!=0)matrix[i][j]+=1;
                        if(matrix[i][j-1]=='*')  matrix[i][j]+=1;
                        if(matrix[i+1][j-1]=='*'&& i<l-1)matrix[i][j]+=1;
                    }
                    if(matrix[i-1][j]=='*'&&i!=0)  matrix[i][j]+=1;
                    if(matrix[i][j]=='*')    matrix[i][j]+=1;
                    if(matrix[i+1][j]=='*'&&i<l-1)  matrix[i][j]+=1;
                if(j<c-1){
                        if(matrix[i-1][j+1]=='*'&&i!=0)matrix[i][j]+=1;
                        if(matrix[i][j+1]=='*')  matrix[i][j]+=1;
                        if(matrix[i+1][j+1]=='*'&&i<l-1)matrix[i][j]+=1;
                    }
                }
            }
        }
        cout << "Field #" << field <<":"<<endl;
        for(int i=0;i<l;i++){
            for(int j=0;j<c;j++){
                cout << matrix[i][j];
            }
            cout << endl;
        }
        field++;
    }
}