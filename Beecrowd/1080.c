#include <stdio.h>
int main() {
    int p,pos,ant=0, i=1;
    for(i;i<=100;i++){
        scanf("%d", &p);
        if(p>ant){
           ant=p;
           pos=i; 
        }
    }
    printf("%d\n%d\n",ant, pos);

    return 0;
}