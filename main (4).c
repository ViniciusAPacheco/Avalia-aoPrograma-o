
#include <stdio.h>

int main() {
  long int a,b,c;
  int n,cont;
  int r;

  printf("Digite o n-ésimo termo da série de Fibonacci desejado:\n");
  scanf("%d", &n);
{
    a = 1;
    b = 1;
    cont = 2;
    printf("\n1 \n1 \n");

    while(cont < n) {
      c = a + b;
      r = c;
      printf("%ld \n", c);
      a = b;
      b = c;
      cont = cont + 1;
    }
  }

  return(0);
}