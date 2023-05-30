#include <stdio.h>

// obter notas
// calcular media
// verificar se o aulo foi reprovado ou nao
// se a media for >= a 7 aprovado
// caso contrario, reprovado

int main(void) {
  float nota1, nota2, media;

  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);

  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);

  media = (nota1 + nota2) / 2;

  if (media >= 7)
    printf("Aprovado");
  else
    printf("Reprovado");

  return 0;
}