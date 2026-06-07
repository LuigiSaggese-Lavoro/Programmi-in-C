/*
Luigi Saggese 07.11.2023
• Consegna: scrivere un programma in C che implementi
	delle versioni basilari di una calcolatrice.
*/

#include <stdio.h>
#include <math.h>

/* Funzioni matematiche */

double somma(double a, double b) {
    return a + b;
}

double sottrazione(double a, double b) {
    return a - b;
}

double moltiplicazione(double a, double b) {
    return a * b;
}

double divisione(double a, double b) {
    return a / b;
}

int resto(int a, int b) {
    return a % b;
}

double potenza(double a, double b) {
    return pow(a, b);
}

double media(double a, double b) {
    return (a + b) / 2.0;
}

int main() {

    double a, b;
    int operazione;
    char continua = 'y';

    while (continua == 'y' || continua == 'Y') {

        printf("\n  === CALCOLATRICE ===\n");

        printf("  Inserire il primo numero: ");
        if (scanf("%lf", &a) != 1) {
            printf("  Errore: input non valido.\n");
            return 1;
        }

        printf("  Inserire il secondo numero: ");
        if (scanf("%lf", &b) != 1) {
            printf("  Errore: input non valido.\n");
            return 1;
        }

        printf("\n  Operazioni disponibili:\n");
        printf("        1 = Addizione\n");
        printf("        2 = Sottrazione\n");
        printf("        3 = Moltiplicazione\n");
        printf("        4 = Divisione\n");
        printf("        5 = Resto della divisione\n");
        printf("        6 = Potenza\n");
        printf("        7 = Media aritmetica\n");

        printf("\n  Inserire l'operazione: ");
        scanf("%d", &operazione);

        switch (operazione) {

            case 1:
                printf("  -Risultato: %.2lf\n", somma(a, b));
                break;

            case 2:
                printf("  -Risultato: %.2lf\n", sottrazione(a, b));
                break;

            case 3:
                printf("  -Risultato: %.2lf\n", moltiplicazione(a, b));
                break;

            case 4:
                if (b == 0) {
                    printf("  Errore: divisione per zero non consentita.\n");
                } else {
                    printf("  -Risultato: %.2lf\n", divisione(a, b));
                }
                break;

            case 5:
                if ((int)b == 0) {
                    printf("  Errore: impossibile calcolare il resto con divisore zero.\n");
                } else {
                    printf("  -Risultato: %d\n", resto((int)a, (int)b));
                }
                break;

            case 6:
                printf("  -Risultato: %.2lf\n", potenza(a, b));
                break;

            case 7:
                printf("  -Risultato: %.2lf\n", media(a, b));
                break;

            default:
                printf("  Operazione non valida.\n");
        }

        printf("\n  Vuoi effettuare un'altra operazione? (y/n): ");
        scanf(" %c", &continua);
    }

    printf("\n  --Programma terminato--\n");

    return 0;
}
