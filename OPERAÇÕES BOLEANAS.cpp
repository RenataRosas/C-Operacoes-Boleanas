#include<stdio.h>

/*
Os operadores relacionais s�o usados para construir express�es booleanas, ou seja, 
express�es que ter�o como resultado verdadeiro (valor 1) ou falso (valor 0). 
Quando fazemos alguma opera��o relacional na linguagem C, se a express�o for verdadeira, o resultado ser� 1; 
caso contr�rio, retornar� zero, se a express�o for considerada falsa.

*/

int main(){
    int n1 = 0;
    int n2 = 0;
    printf("\n Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("\n Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("\n n1 e n2 sao iguais? %d", n1==n2);
    printf("\n n1 e maior que n2? %d", n1>n2);
    printf("\n n1 e menor ou igual a n2? %d", n1<=n2);
}

