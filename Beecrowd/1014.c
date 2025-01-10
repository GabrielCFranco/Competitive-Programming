    #include <stdio.h>
     
int main() {
    int Km;
    float Liters, total;
    scanf("%d %f", &Km, &Liters);
    total = Km / Liters;
    printf("%.3f km/l\n", total);
    
    return 0;
}