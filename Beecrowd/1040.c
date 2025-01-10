#include <stdio.h>

int main() {
    float N1, N2, N3, N4, NE, media;
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
    media = (N1 * 2 + N2 * 3 + N3 * 4 + N4)/10;
    printf("Media: %.1f\n", media);
    if (media >= 7){
        printf("Aluno aprovado.\n");
    }
    else if(media >= 5.0 && media < 7 ){
        printf("Aluno em exame.\n");
        scanf("%f", &NE);
        printf("Nota do exame: %.1f\n", NE);
        NE = (media + NE)/2;
        if(NE >= 5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", NE);
        }
            else{
                printf("Aluno reprovado.\n");
                printf("Media final: %.1f\n", NE);
            }
        }
    else if(media < 5){
        printf("Aluno reprovado.\n");
    }
    return 0;
}