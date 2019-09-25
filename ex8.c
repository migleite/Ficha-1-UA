#include <stdio.h>
#include <math.h>

int main (void)
{
    //variaveis de entrada
    int A;
    int B;

    //variaveis de saida
    float C;
    double angle;

    //Input de variaveis
    printf("Introduza o tamanho do cateto adjacente e do cateto oposto respetivamente\n");
    scanf("%d%d", &A, &B);

    //calculo da hipotenusa e angulo
    C = sqrt(pow(A,2)+pow(B,2));
    angle = acos(((float)A/C));
    //converter radianos para graus
    angle*=180; angle/=M_PI;

    printf("O valor da hipotenusa: %4.2f\n", C);
    printf("O valor do angulo adjacente: %3.2f °\n",angle);
    return 0;
}