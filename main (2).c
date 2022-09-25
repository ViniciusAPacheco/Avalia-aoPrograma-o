   #include <stdio.h>
    
    int main()
    {
        int numeroCaracteresNome = 0;
        int numeroCaracteresEmail = 0;
        int numeroCaracteresTelefone = 0;

        char caractere = getchar();
        while (caractere != '\n')

        {
            numeroCaracteresNome = numeroCaracteresNome + 1;
           caractere = getchar();
       }
        {
            numeroCaracteresEmail = numeroCaracteresEmail + 1;
           caractere = getchar();
       }
        {
            numeroCaracteresTelefone = numeroCaracteresTelefone + 1;
           caractere = getchar();
       }
        printf("%d\n", numeroCaracteresNome);
        printf("%d\n", numeroCaracteresEmail);
        printf("%d\n", numeroCaracteresTelefone);

       return 0;
   }