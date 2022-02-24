#include<stdio.h>

/*
Os operadores relacionais são usados para construir expressões booleanas, ou seja, 
expressões que terão como resultado verdadeiro (valor 1) ou falso (valor 0). 
Quando fazemos alguma operação relacional na linguagem C, se a expressão for verdadeira, o resultado será 1; 
caso contrário, retornará zero, se a expressão for considerada falsa.

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

