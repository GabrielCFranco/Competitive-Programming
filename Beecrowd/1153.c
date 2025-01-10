#include <stdio.h>  
int main() {
int n,i=1,total=1;
    scanf("%d",&n);
    for(i;i<=n;i++){
        total = total*i;
    }
    printf("%d\n",total);
    return 0;
}
