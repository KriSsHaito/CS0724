#include <stdio.h>
int main()
{
    int primo;
    int secondo;
    float risultato;

    printf("\nInserisci i numeri di cui vuoi calcolata la media\n");
    
    printf("\nPrimo numero: ");
    scanf("%d", &primo);

    printf("\nSecondo numero: ");
    scanf("%d", &secondo);

    risultato = (float)(primo + secondo) / 2;

    printf("\nLa tua media e': %.2f\n", risultato);

    return 0;

}