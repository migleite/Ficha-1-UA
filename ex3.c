#include <stdio.h> 

int main(void)
{
//variaveis de entrada
int best1;
int best2;
int best3;
int p;
float peso_teorica;
float peso_best1;
float peso_best2;
float peso_best3;
float peso_pratica;

//variaveis de saida
double final;

//input das variaveis
printf("Insira o peso na nota do melhor teste: \n");
scanf ("%f",&peso_best1);
printf("Insira o peso na nota do segundo melhor teste: \n");
scanf ("%f",&peso_best2);
printf("Insira o peso na nota do terceiro melhor teste: \n");
scanf ("%f",&peso_best3);
printf("Insira o peso na nota de todos os testes teoricos: \n");
scanf ("%f",&peso_teorica);
printf("Insira o peso na nota do teste pratico: \n");
scanf ("%f",&peso_pratica);

printf("Agora insira a nota do melhor teste: \n");
scanf ("%d",&best1);
printf("Insira a nota do segundo melhor teste: \n");
scanf ("%d",&best2);
printf("Insira a nota do terceiro melhor teste: \n");
scanf ("%d",&best3);
printf("Insira a nota do teste pratico: \n");
scanf ("%d",&p);

//calculo do resultado
final = peso_teorica*(peso_best1*best1+peso_best2*best2+peso_best3*best3)+peso_pratica*p;

printf("A nota final: %3.1f\n", final);
return 0;
}