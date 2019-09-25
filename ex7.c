#include <stdio.h>
#include <math.h>

int main (void)
{
    //variaveis de entrada
    float p1x;
    float p1y;
    float p2x;
    float p2y;

    //variaveis de saida
    float dist;

    //input de variaveis
    printf("Insira os valores para p1 x e y respetivamente:\n");
    scanf("%f %f", &p1x, &p1y);
    printf("Insira os valores para p2 x e y respetivamente:\n");
    scanf("%f %f", &p2x, &p2y);

    //calculo de variaveis
    dist = sqrt(pow(p1x - p2x,2) + pow(p1y - p2y,2));
    printf("A distancia entre os pontos: %4.2f\n", dist);    
    return 0;
}