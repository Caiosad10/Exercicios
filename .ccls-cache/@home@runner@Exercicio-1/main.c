#include <stdio.h>
#include <stdlib.h>

int main(){
  tresNumeros();
  return 0;
}

int tresNumeros(){
  int a, b, c, maior = 0, menor = 0;
  printf("Digite o primeiro número: \n");
  scanf("%d", &a);
  printf("Digite o segundo número: \n");
  scanf("%d", &b);
  printf("Digite o terceiro número: \n");
  scanf("%d", &c);
  
  if(a>b && a>c)
    maior = a;
  else if(b>a && b>c)
    maior = b;
  else if (c>a && c>b)
    maior = c;
    
  if (a<b && a<c)
    menor = a;
  else if (b<a && b<c)
    menor = b;
  else
    menor = c;
  
  printf("O maior numero é: %d e o menor é %i\n", maior, menor);
}