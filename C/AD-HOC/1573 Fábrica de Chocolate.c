#include <stdio.h>
#include <math.h>

void encontrarAresta();

int main(){
    encontrarAresta();
    return 0;
}

void encontrarAresta(){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    while ((a != 0) && (b !=0) && (c != 0)){
        double volume = a*b*c;
        double aresta = cbrt(volume);
        aresta = floor(aresta);
        printf("%.0lf\n", aresta);
        scanf("%lf %lf %lf", &a, &b, &c);
    }
}