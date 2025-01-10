#include <stdio.h>
int main(){
    int N, y = 1, X, i = 1;
    scanf("%d %d", &X, &N);
    while (y < N){
        for (i; i<=X && y < N; i++){
            printf("%d ", y);
            y++;
            if (y%X == 0){
                printf("%d\n", y);
                y++;
            }
        }
        i = 1;
    }
    if (y <= N)
        printf("%d\n", y);
    else 
        return 0;
}