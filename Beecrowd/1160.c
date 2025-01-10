#include <stdio.h>
int main() {
int t,pa,pb,i=1,anos=0;
double g1,g2;
scanf("%d",&t);
for(i;i<=t;i++){
    scanf("%d %d %lf %lf",&pa,&pb,&g1,&g2);
    anos=0;
        while(pb>=pa && anos<101){
            pa+=(int)((pa*g1)/100);
            pb+=(int)((pb*g2)/100);
            anos++;
        }
        if(anos<=100) printf("%d anos.\n",anos);
        else printf("Mais de 1 seculo.\n");
    }
    return 0;
}   