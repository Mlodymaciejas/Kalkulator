#include <math.h>
#include <stdio.h>


int main(){

    double a,b,result;
    int operation;
    char choice;

    do{
        printf("\nKalkulator:\n");
        printf("1. Dodawanie\n");
        printf("2. Odejmowanie\n");
        printf("3. Mnozenie\n");
        printf("4. Dzielenie\n");
        printf("5. Potegowanie\n");
        printf("6. Pierwiastek\n");
        printf("7. Modulo (a%%b)\n");
        printf("Wybierz jakie dzialanie chcesz wykonac (1-7): ");

        while (scanf("%d", &operation) != 1 || (operation < 1 || operation > 7)) {
            printf("Bledny wybor dzialania! Wybierz 1-7: ");
            while (getchar() != '\n'); // Czyszczenie bufora
        }

        if(operation == 6){
            printf("Podaj liczbe: ");
            while(scanf("%lf", &a) != 1 || a<0){
                printf("Podaj liczbe nieujemna: ");
                while(getchar() != '\n');
            }
            result = sqrt(a);
            printf("\n√%.2lf = %.2lf\n",a,result);
        }
        else{
            printf("Podaj pierwsza liczbe: ");
            while (scanf("%lf", &a) != 1) {
            printf("Bledna liczba! Sprobuj ponownie: ");
            while (getchar() != '\n');
        }
        

        printf("Podaj druga liczbe: ");
        while (scanf("%lf", &b) != 1) {
            printf("Bledna liczba! Sprobuj ponownie: ");
            while (getchar() != '\n');
        }
        }
        switch (operation) {
            case 1:
                result = a+b;
                printf("\nWynik dodawania: %.2lf + %.2lf = %.2lf\n", a, b, a + b);
                break;
            case 2:
                result = a-b;
                printf("\nWynik odejmowania: %.2lf - %.2lf = %.2lf\n", a, b, a - b);
                break;
            case 3:
                result = a*b;
                printf("\nWynik mnozenia: %.2lf * %.2lf = %.2lf\n", a, b, a * b);
                break;
            case 4:
                result = a/b;
                if (b != 0) {
                    printf("\nWynik dzielenia: %.2lf / %.2lf = %.2lf\n", a, b, a / b);
                } else {
                    printf("Nie dziel przez 0!\n");
                }
                break;
            case 5:
                result = pow(a,b);
                printf("\n%.2lf^%.2lf = %.2lf", a, b, result);
                break;
            case 7:
                if(a == (int)a && b == (int)b){
                if((int)b != 0){
                int mod = (int)a % (int)b;
                printf("\n%d %% %d = %d\n", (int)a, (int)b, mod);
                }
                }else{
                    printf("Nie mozna dzielic przez 0!\n");
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



