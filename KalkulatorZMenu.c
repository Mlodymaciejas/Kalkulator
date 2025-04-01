#include <stdio.h>

int main() {
    double a, b;
    int operation;
    char choice;

    do {
        printf("\nKalkulator:\n");
        printf("1. Dodawanie\n");
        printf("2. Odejmowanie\n");
        printf("3. Mnozenie\n");
        printf("4. Dzielenie\n");
        printf("Wybierz jakie dzialanie chcesz wykonac (1-4): ");

        // Pobranie operacji i sprawdzenie poprawności
        while (scanf("%d", &operation) != 1 || (operation < 1 || operation > 4)) {
            printf("Bledny wybor dzialania! Wybierz 1-4: ");
            while (getchar() != '\n'); // Czyszczenie bufora
        }

        // Pobranie pierwszej liczby
        printf("Podaj pierwsza liczbe: ");
        while (scanf("%lf", &a) != 1) {
            printf("Bledna liczba! Sprobuj ponownie: ");
            while (getchar() != '\n');
        }

        // Pobranie drugiej liczby
        printf("Podaj druga liczbe: ");
        while (scanf("%lf", &b) != 1) {
            printf("Bledna liczba! Sprobuj ponownie: ");
            while (getchar() != '\n');
        }

        // Wykonanie obliczeń
        switch (operation) {
            case 1:
                printf("\nWynik dodawania: %.2lf + %.2lf = %.2lf\n", a, b, a + b);
                break;
            case 2:
                printf("\nWynik odejmowania: %.2lf - %.2lf = %.2lf\n", a, b, a - b);
                break;
            case 3:
                printf("\nWynik mnozenia: %.2lf * %.2lf = %.2lf\n", a, b, a * b);
                break;
            case 4:
                if (b != 0) {
                    printf("\nWynik dzielenia: %.2lf / %.2lf = %.2lf\n", a, b, a / b);
                } else {
                    printf("Nie dziel przez 0!\n");
                }
                break;
            default:
                printf("Cos poszlo nie tak...\n");
        }

        // Pytanie o kontynuację
        printf("\nCzy chcesz dalej kontynuowac obliczenia? (t/n): ");
        scanf(" %c", &choice); // Spacja w "%c" ignoruje białe znaki

    } while (choice == 't' || choice == 'T');

    printf("\nDzieki za skorzystanie z kalkulatora!\n");

    return 0;
}