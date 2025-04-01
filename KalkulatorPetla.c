#include <stdio.h>

int main()
{
    double a,b;
    char choice;

    do{

        printf("Podaj pierwsza liczbe: \n");
        while(scanf("%lf", &a) != 1){
            printf("Bledna liczba!\n");
            while(getchar() != '\n');
        }

        printf("Podaj druga liczbe: \n");
        while(scanf("%lf", &b) != 1){
            printf("Bledna liczba!\n");
            while(getchar() != '\n');
    }
    printf("\n Wynik dzialania: ");
    printf("\n Dodawanie: %.2lf + %.2lf = %.2lf\n",a, b, a+b);
    printf(" Odejmowanie: %.2lf - %.2lf = %.2lf\n",a, b, a-b);
    printf(" Mnozenie: %.2lf * %.2lf = %.2lf\n",a, b, a*b);


    if(b!=0){
    printf("\n Dzielenie: %.2lf / %.2lf = %.2lf\n", a, b, a/b);
    }else{
        printf("Nie mozna dzielic przez 0!\n");
        }

    printf("\nCzy chcesz dalej kontynuowac obliczenia? (t/n): ");
    while(getchar() != '\n');
    scanf(" %c", &choice);
    } while (choice == 't' || choice == 'T');

    printf("Dzieki!\n");

    return 0;
}