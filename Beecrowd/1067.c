#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    if(1 <= x && x <=1000){
    for(int i = 0; i <= x; i++){
    if(i%2==1){
        printf("%d\n", i);
            }
        }
    }
    return 0;
}