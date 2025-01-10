#include <stdio.h>
 
int main() {
float x=1,y=1,S=0;
    while(x<=39){
        S=S+(x/y);
        x+=2;
        y*=2;
    }
    printf("%.2f\n",S);
    return 0;
}