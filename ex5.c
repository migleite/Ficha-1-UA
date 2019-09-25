#include <stdio.h>

int main (void)
{
    //variaveis de entrada
    float v1;
    float v2;

    //variaveis de saida
    float vfinal;

    //input de variaveis 
    printf("Insira a media da velocidade da primeira metade da viagem\n");
    scanf("%f",&v1);
    printf("Insira a media da velocidade da segunda metade da viagem\n");
    scanf("%f",&v2);

    //Calculo final
    vfinal=(v1+v2)/2;

    printf("A media da velocidade por toda a viagem: %5.1f\n", vfinal);
    return 0;

}