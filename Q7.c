#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b, c, d, media;

  printf("Digite o primeiro número com peso 3:");
  scanf("%d", &a);
  printf("\nDigite o segundo número com peso 2:");
  scanf("%d", &b);
  printf("\nDigite o terceiro número com peso 1:");
  scanf("%d", &c);
  printf("\nDigite o terceiro número com peso 5:");
  scanf("%d", &d);
  media = ((a * 3) + (b * 2) + c + (d * 5)) / 4;
  printf("\n A media ponderada e: %d", media);

  return 0;
}