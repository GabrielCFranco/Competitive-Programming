#include <stdio.h>
int main() {
    int x = 1;
    for(int i = 0; i < 101; i++){
    if(x%2==0){
        printf("%d\n", x);
        x++;
    }
    else    x++;
    }
    return 0;
}