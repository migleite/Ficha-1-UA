#include <stdio.h>

int main (void)
{
    //variaveis de entrada
    float C;
    float F;

    //input de variaveis
    printf("Insira a temperatura em ºC: \n");
    scanf("%f",&C);

    //calculo de variaveis
    F = 1.8 * C + 32;
    
    //Demonstracao de variaveis
    printf("a temperatura converte do seguinte modo, %4.2f ºC = %4.2f ºF\n", C, F);
    //" ºC = %4.2f", F, " ºF\n")

    return 0;
}