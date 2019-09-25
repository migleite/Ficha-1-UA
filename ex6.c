#include <stdio.h>

int main (void)
{
    //variaveis de entrada
    int seg;

    //variaveis de saida 
    int min;
    int hor;

    //input de variaveis
    printf("Insira os segundos:\n");
    scanf("%d",&seg);

    //calculo de variaveis
    min = seg / 60;
    seg %= 60;
    hor = min / 60;
    min %= 60;

    printf("O tempo inserido converte para %02d:%02d:%02d\n", hor, min, seg);
    return 0;
}