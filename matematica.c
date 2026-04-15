#include <stdio.h>

int main(){
    /*
    soma (+) ou (+=)
    subtração (-) ou (-=)
    multiplicação (*) ou (*=)
    divisão (/) ou (/=)
    */
   int n1, n2;
   int soma, subtracao, multiplicacao, divisao;

   printf("Entre com o primeiro valor: \n");
   scanf("%d",&n1);
   printf("Entre com o segundo valor; \n");
   scanf("%d",&n2);

   soma = n1 + n2; // OU n1 += n2
   subtracao = n1 - n2; // OU n1 -= n2
   multiplicacao = n1 * n2; // OU n1 *= n2
   divisao = n1 / n2; // OU n1 /= n2

   printf("A soma de %d + %d é igual à: %d\n", n1, n2, soma);
   printf("A subtração de %d - %d é igual à: %d\n", n1, n2, subtracao);
   printf("A multiplicação de %d * %d é igual à: %d\n", n1, n2, multiplicacao);
   printf("A divisão de %d / %d é igual à: %d\n", n1, n2, divisao);

return 0;
}