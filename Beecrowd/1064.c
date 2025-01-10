#include <stdio.h> 
int main() {
    float n = 0, m = 0;
    int t = 0;
    for(int i = 1;i < 7;i++){
        scanf("%f", &n);
        if(n>0){
            t++;
            m += n;
        }
    }
    printf("%d valores positivos\n%.1f\n", t, m /= t);
    return 0;
}