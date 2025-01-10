#include <stdio.h>
int main() {
    int x, n1=1,n2=2,n3=3;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        int mult=4;
        printf("%d %d %d PUM\n",n1+(i*mult),n2+(i*mult),n3+(i*mult));
    }
    return 0;
}