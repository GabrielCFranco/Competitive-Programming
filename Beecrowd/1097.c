#include <stdio.h>

int main() {
int i=1,j=7,x=0,y=0,z=0,w=0,r=0;
    while(x<3){
        printf("I=%d J=%d\n",i,j-x);
        x++;
    }
    i+=2;
    j+=2;
    while(y<3){
        printf("I=%d J=%d\n",i,j-y);
        y++;
    }
    i+=2;
    j+=2;
    while(z<3){
        printf("I=%d J=%d\n",i,j-z);
        z++;
    }
    i+=2;
    j+=2;
    while(w<3){
        printf("I=%d J=%d\n",i,j-w);
        w++;
    }
    i+=2;
    j+=2;
    while(r<3){
        printf("I=%d J=%d\n",i,j-r);
        r++;
    }
    return 0;
}