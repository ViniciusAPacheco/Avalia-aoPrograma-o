#include <stdio.h>

int main()
{
        int tabuada;
        int tabuadas;
            printf ("\n Digite a tabuada desejada:");
            scanf ("%i", &tabuada);

            for (int x=1; x<=tabuada; ++x){
            printf ("\n %ix%i = %i", x, tabuada, x*tabuada);
            }
        return 0;
}
