#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b, c, greaterAB;
    scanf("%d %d %d", &a, &b, &c);
    greaterAB = (a + b + abs(a - b)) / 2;
    printf("%d eh o maior\n", ((greaterAB + c + abs(greaterAB - c)) / 2);
    return 0;
}
