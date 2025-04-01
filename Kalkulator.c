#include <stdio.h>

int main()
{
double a,b;
int result;


printf("Podaj pierwsza liczbe: ");
result = scanf("%lf", &a);

if(result !=1){
    printf("Bledna liczba!\n");
    return 1;

}
printf("Podaj druga liczbe: ");
result = scanf("%lf", &b);

if(result != 1){
    printf("Bledna liczba!\n");
    return 1;
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

return 0;


}