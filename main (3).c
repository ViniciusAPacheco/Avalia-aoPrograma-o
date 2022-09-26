#include <stdio.h>

int main() {
  int n, antecessores;

  printf("Informe um numero inteiro: ");
  scanf("%d", &n);
  
for(int antecessores=--n; --antecessores;){
for(int i = 1; n>=1;){

  printf("\n");
  printf("%i (antecessores)\n", antecessores);
  printf("%i (valor)\n", n);
}
}
  return(0);
}


