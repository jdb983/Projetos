#include <stdio.h>

int main(void)
{

  /*EXERCÍCIO 2*/
float n1,n2;
  
  printf ("\nDigite um numero:");
  scanf ("%f", &n1);
  
  printf ("\nDigite um numero:");
  scanf ("%f", &n2);

    if(n1>0 && n2>0)

  printf("Ambos os valores sao positivos.");
    
    else
    
  printf ("Ao menos um dos valores eh negativo.");
       
}