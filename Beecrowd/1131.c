#include <stdio.h>

int main() {
    int x,y,rep=0,inter=0,gremio=0,empate=0,grenais=0;
    do{
        scanf("%d %d",&x,&y);
        if(x>y){
            inter++;
        }
        else if(y>x){
            gremio++;
        }
        else{
            empate++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &rep);
        grenais++;
    }while(rep!=2);
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n",inter);
    printf("Gremio:%d\n",gremio);
    printf("Empates:%d\n",empate);
    if(inter>gremio){
        printf("Inter venceu mais\n");
    }
    else if(gremio>inter){
        printf("Gremio venceu mais\n");
    }
    else{
        printf("Não houve vencedor\n");
    }
    return 0;
}