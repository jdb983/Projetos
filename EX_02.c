#include <stdio.h>

int main(void) 
  {
  
  int n, qua=(n*n);

    printf("Digite um número inteiro ou 0 para sair:\n");
    scanf("%d", &n);


    while( n != 0)
      {
        printf("O quadrado do número é = %d\n", n*n);
        printf("\nDigite um número inteiro ou 0 para sair:\n");
        scanf("%d", &n);
      }
    
  return 0;
}