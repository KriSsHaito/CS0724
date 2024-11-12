#include <stdio.h>

int main()
{

    int primo;
    int secondo;
    int risultato;

    printf("\nInserisci i numeri che vuoi moltiplicare.");

    printf("\nPrimo numero: ");
    scanf("%d", &primo);

    printf("\nSecondo numero: ");
    scanf("%d", &secondo);

    risultato = primo * secondo;

    printf("\nIl tuo risultato e':%d\n", risultato);

    return 0;
}