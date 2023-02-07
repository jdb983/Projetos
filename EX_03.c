#include <stdio.h>

int main(void) 
{

  /*Construa a função calculaPesoIdeal que
recebe o sexo e a altura de uma pessoa como
parâmetros. A função deve calcular e retornar o peso
ideal da pessoa, utilizando uma das seguintes
fórmulas:
• masculino: (72.7 * alt) - 58;
• feminino: (62.1 * alt) - 44.7.
Faça um programa que lê o sexo, a altura e o peso
de uma pessoa e imprime se esta pessoa está
acima, abaixo ou com o peso ideal.
*/
  /*EXERCÍCIO 3*/
  
float altura, peso,  n1='(72.7*altura)-58', n2='(62.1*altura)-44.7';
char sexo;

    printf ("Digite sua altura:");
    scanf("%f", &altura);

    printf ("Digite seu sexo: (m para masc e f para fem:");
    scanf(" %c", &sexo);

    printf("Digite seu peso atual:");
    scanf("%f", &peso);

    
        if (sexo == 'f')
        {
          if (peso > ((62.1 * altura) - 44.7))
            {
            printf("Você está acima do peso.\nSeu peso ideal=%.2f", (62.1*altura)-44.7);
            }
          else
          {
            if (peso < (62.1 * altura) - 44.7)
            {
             printf("Você está abaixo do peso.\nSeu peso ideal=%.2f", (62.1*(float)altura)-44.7);
            }

              else
                {
                printf("Você está no peso ideal");
                }
          }
        }
              
        else
          {
            if (peso > (72.7*altura)-58)
            {
            printf("Você está acima do peso.\nSeu peso ideal=%.2f", (72.7*(float)altura)-58);
            }
              
          else 
            {
            if (peso < (72.7*altura)-58)
              {
             printf("Você está abaixo do peso.\nSeu peso ideal=%.2f", (72.7*(float)altura)-58);
              }
              else
                {
                printf("Você está no peso ideal");
                }
            }
          }
  
    return 0;
  }