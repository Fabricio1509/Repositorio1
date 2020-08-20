#include<stdio.h>
int main(){
    int i;
    printf("Insira um numero de 1 a 5\n");
    scanf("%i", &i);
    switch(i){
        case 1:
        printf("primeiro\n");
        break;
        case 2:
        printf("segundo\n");
        case 3:
        printf("terceiro\n");
        case 4:
        printf("quarto\n");
        case 5:
        printf("quinto\n");
        default:
        printf("opção nao valida");
        break;
    }
}