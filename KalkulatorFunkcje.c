#include <math.h>
#include <stdio.h>


double getNumber(const char *prompt)
{
    double num;
    printf("%s", prompt);
    while(scanf("%lf", &num) != 1){
        printf("Błędna liczba! Spróbuj ponownie: ");
        while(getchar() != '\n');
    }
    return num;
}

int getOperation(){
    
    int op;
    printf("\n-----Kalkulator-----\n");
    printf("1. Dodawanie\n2. Odejmowanie\n3. Mnozenie\n4. Dzielenie\n");
    printf("5.Potegowanie(a^b)\n6. Pierwiastek kwadratowy (a)\n7. Modulo(a%%b)\n");
    printf("Wybierz operacje (1-7): ");
    
    while(scanf("%d", &op) != 1 || (1 > op || op > 7)){
        printf("Bledny wybor. Wybierz jeszcze raz operacje: ");
        while(getchar() != '\n');
    }
    return op;
}

double add(double a, double b){ return a+b; };
double substract(double a, double b){ return a-b; }
double multiply(double a, double b){ return a*b; }
double divide(double a, double b){ return (b != 0) ? a/b: NAN; }
double power(double a, double b){ return pow(a,b);}
double sqrtNumber(double a){ return (a>=0) ? sqrt(a): NAN; }
int mod(int a, int b){ return (b != 0) ? a % b : 0; }


int main(){
    char choice;
    do{
        int operation = getOperation();
        double a,b,result = 0;
        int intResult;

        if(operation == 6){
            a = getNumber("Podaj liczbe: ");
            result = sqrtNumber(a);
            if(isnan(result)) {
                printf("Nie mozna pierwiastkowac liczby ujemnej\n");
         } else{
                printf("Pierwiastek z liczby %.2lf wynosi: %.2lf\n",a, result);
        }

        printf("Czy chcesz kontynuowac obliczenia? (t/n): ");
        while(getchar() != '\n');
        scanf(" %c", &choice);
        continue;
    }
    
    if (operation != 6) {  // Pierwiastek obsłużony wcześniej
        a = getNumber("Podaj pierwsza liczbe: ");
        b = getNumber("Podaj druga liczbe: ");
    }

        switch (operation){
            case 1: result = add(a,b); printf("\n%.2lf + %.2lf = %.2lf\n",a,b,result); break;
            case 2: result = substract(a,b); printf("\n%.2lf - %.2lf = %.2lf\n",a,b,result); break;
            case 3: result = multiply(a,b); printf("\n%.2lf * %.2lf = %.2lf\n",a,b,result); break;
            case 4: 
            if(b == 0){
               printf("\nNie mozna dzielic przez 0!\n"); 
            } 
            else{
            result = divide(a,b); printf("\n%.2lf / %.2lf = %.2lf\n",a,b,result);
            }
            break;

            case 5: result = power(a,b); printf("\n%.2lf ^ %.2lf = %.2lf\n",a,b,result); break;
            case 7:
                if(fmod(a, 1) == 0 && fmod(b, 1) == 0){ // Sprawdzamy, czy są całkowite
                    if ((int)b != 0){ 
                     intResult = (int)a % (int)b; 
            printf("\n%d %% %d = %d\n", (int)a, (int)b, intResult);
        } else {
            printf("\nNie mozna dzielic przez 0!\n");
        }
    } else {
        printf("\nModulo dziala tylko na liczbach calkowitych!\n");
    }
    break;
                    
                    default: printf("Cos poszlo nie tak... \n");  
            }
            printf("\n Czy chcesz kontynuowac obliczenia? (t/n)\n");
            while(getchar() != '\n');
            scanf(" %c", &choice); 
        } while (choice == 't' || choice == 'T');

        printf("\nDzieki za skorzystanie z kalkulatora!\n");
        return 0;

    }



