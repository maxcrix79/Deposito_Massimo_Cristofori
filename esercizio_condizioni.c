#include <stdio.h>

int main() {
    int numero;
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);
    if (numero > 0 ) {
        printf("Il numero è maggiore di 0 .\n");
        if(numero > 100) 
            {printf("WOW .\n");}
    }
      if (numero < 0 ) {
        printf("Il numero è minore di 0 .\n");}  
        if (numero == 0 ) {
        printf("Il numero è uguale a 0 .\n");}

    
    return 0;
}
