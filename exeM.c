#include <stdio.h>

int main(){

    char nome[50];
    char sexo;

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    
    printf("Digite seu sexo[M/F]: ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'F' || sexo =='f' || sexo == 'm')
    {
     if (sexo == 'M' || sexo == 'm')
     {
        printf("Ilmo. Sr. %s", nome);
     }
     if (sexo == 'F' || sexo == 'f')
     {
        printf("Ilma. Sra. %s", nome);
     }
    }
    else
    {
        printf("Sexo informado invalido!");
    }
       
}