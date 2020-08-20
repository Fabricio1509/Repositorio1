#include<stdio.h>
int main(){
    int num1, num2;
    printf("Digite 2 numeros inteiros:\n");
    scanf("%i %i", &num1, &num2);

    if(num2 == 0)
      printf("divisão por zero nao permitida");
    else{
        if(num1 % num2 == 0)
          printf("%i numero é divisivel por %i.\n", num1, num2);
        else
          printf("%i nao e divisivel por %i", num1, num2);
        }
        return 0;
    }
