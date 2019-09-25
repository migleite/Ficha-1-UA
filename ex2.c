#include <stdio.h>

int main(void)
{
          //variaveis de entrada
    int best1;
    int best2;
    int best3;
    int p;
    
          //variaveis de saida
    double final;
    const float peso_teorica = 0.5;
    const float peso_best1 = 0.4;
    const float peso_best2 = 0.35;
    const float peso_best3 = 0.25;
    const float peso_pratica = 0.5;

    
    printf("Insira a nota best1:\n");
    scanf("%d",&best1);
     printf("Insira a nota best2:\n");
    scanf("%d",&best2);
    printf("Insira a nota best3:\n");
    scanf("%d",&best3);
     printf("Insira a nota p:\n");
    scanf("%d",&p);
    
    //execucao do programa
    final = peso_teorica * (peso_best1 * best1 + peso_best2 * best2 + peso_best3 * best3) + peso_pratica * p;
    
    printf("Final grade: %4.1f\n", final);
    
    return 0;
}

