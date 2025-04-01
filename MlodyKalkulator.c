#include <stdio.h>
#include <math.h>

//POBIERANIE LICZBY OD UZYTKOWNIKA
double getNumber(const char *prompt){
    double number;
    printf("%s", prompt);
    while(scanf("%lf", &number) != 1){
        printf("Bledna liczba. Podaj poprawna! Jeszcze raz: ");
        while(getchar() != '\n');
    }
    return number;
}

//POBIERANIE OPERACJI OD UZYTKOWNIKA

int getOperation(){
    int op;
    printf("------Kalkulator------\n");
    printf("1. Dodawanie\n2. Odejmowanie\n3. Mnozenie\n");
    printf("4. Dzielenie\n");
    printf("\nWybierz operacje od 1 do 4: ");
    while(scanf("%d", &op) != 1 || 1 > op || op > 4){
        printf("Bledna liczba. Podaj poprawna! Jeszcze raz: ");
        while(getchar() != '\n');
    }
    return op;
}

//Glowna funkcja
int main(){

    // POBIERANIE DWOCH LICZB
    double a = getNumber("Podaj pierwsza liczbe: ");
    double b = getNumber("Podaj druga liczbe: ");

    //WYBÓR OPERACJI
    int operation = getOperation();

    //DODAWANIE
    if(operation == 1){
        double wynik = a+b;
        printf("\nWynik dodawania %.2lf + %.2lf = %.2lf\n ",a,b,wynik);
    } 
    //ODEJMOWANIE
    else if(operation == 2){
        double wynik = a-b;
        printf("\nWynik odejmowania %.2lf - %.2lf = %.2lf\n ",a,b,wynik);
    } 
    // MNOZENIE
    else if(operation == 3){
        double wynik = a*b;
        printf("\nWynik odejmowania %.2lf * %.2lf = %.2lf\n ",a,b,wynik);
    } 
    // DZIELENIE
    else if(operation == 4){
        double wynik = a/b;
        printf("\nWynik odejmowania %.2lf / %.2lf = %.2lf\n ",a,b,wynik);
    } else{
        printf("Zla liczba. Koniec zabawy!");
    }
    return 0;
}