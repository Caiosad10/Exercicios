#include <stdio.h>
#include <stdlib.h>

int main(){
  calculadoraInteligente();
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
  else
    maior = c;
    
  if (a<b && a<c)
    menor = a;
  else if (b<a && b<c)
    menor = b;
  else
    menor = c;
  
  printf("O maior numero é: %d e o menor é %i\n", maior, menor);
}

int parImpar(){
  int numb1, numb2, resto;
  printf("Digite o primeiro número: \n");
  scanf("%d", &numb1);
  printf("Digite o segundo número: \n");
  scanf("%d", &numb2);
  resto = numb1 % numb2;

  if (resto == 0){
    printf("O seu valor é zero");
  }else if (resto != 0){
    if (resto%2 == 0)
      printf("O seu resto é %d e ele é par", resto);
    else
      printf("O seu resto é %d e ele é impar", resto);
  }
}

int idade(){
  int idade;
  printf("Digite a sua idade: \n");
  scanf("%d", &idade);

  if (idade>=18 && idade<=67)
    printf("Voce pode doar seu sangue");
  else if (idade<18 || idade>67)
    printf("Você não pode doar seu sangue");
}

int niver(){
  int d, m, a;
  printf("Digite a sua data de nascimento: \n");
  scanf("%d %d %d", &d, &m, &a);

  if (d>31 || m>12 || a<1900 || a>2023)
    printf("data invalida");
  else
    printf("%d/ %d/ %d", d, m, a);
}

int raio(){
  float raio, diam, comp, area, pi = 3.14;
  printf("Digite o raio do circulo: \n");
  scanf("%f", &raio);

  diam = 2 * raio;
  comp = 2 * pi * raio;
  area = pi * (raio * raio);

  printf("O diametro é %.2f, o comprimento é %.2f e a area é %.2f", diam, comp, area);
}

int tabuada(){
  int numb, numb2 = 1, resultado;
  printf("Digite o numero que você deseja ver na tabuada até 10: \n");
  scanf("%d", &numb);
  while (numb2 <= 10){
    printf("%d x %d = %d\n", numb, numb2, resultado = numb * numb2);
    numb2++;
  }
}

int calculadoraInteligente(){
  int numb1, numb2;
  char operacao;
  
  printf("Para encerrar o programa digite somente o 0\n");
  printf("\n");
  
  printf("Digite o primeiro número: \n");
  scanf("%d", &numb1);
  fflush(stdin);

  if (numb1 == 0){
    printf("Programa encerrado");
  }else {
    fflush(stdin);
    printf("Digite a operação (+/-): \n");
    scanf(" %c", &operacao);

    while(operacao != '+' && operacao != '-'){
      fflush(stdin);
      printf("Digite a operação novamente (+/-): \n");
      scanf(" %c", &operacao);
    }

    printf("Digite o segundo numero: \n");
    scanf("%d", &numb2);

    if (operacao == '+')
      printf("O resultado é %d + %d é %d \n", numb1, numb2, numb1 + numb2);
    else
      printf("O resultado é %d - %d é %d \n", numb1, numb2, numb1 - numb2);
  }
}

