#include <stdio.h>
int main(){
    char nome[10];
    int idade;
    float altura;
    printf("Digite o seu nome: ");
    scanf("%s", nome, "%c", nome);
    printf("Seja bem-vindo, Sr %s. \nSeu nome possui a inicial de letra %c.",nome,nome);
    
    printf("\nInforme a sua idade: ");
    scanf("%d", &idade);

    printf("\nInforme a sua altura: ");
    scanf("%f", &altura);

    printf("\nInicial: %c \nNome: %s \nIdade: %d \nAltura: %.2f",nome,nome,idade,altura);
}