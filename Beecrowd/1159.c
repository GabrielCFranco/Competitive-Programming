#include <stdio.h> 
int main() {    
    int x = -1, total=0; 
    while (scanf("%d",&x)==1&&x != 0){ 
        if(x%2) x++; 
        total =(x*5)+20;
        printf("%d\n", total);  
        }
        return 0;
    }