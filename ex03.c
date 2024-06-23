#include <stdio.h>

int main(){
    short num, intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;

    do
    {
        printf("Digite um numero de 0 até 100\n");
        scanf("%hd", &num);

        if(num >= 0 && num <= 25)
        {
            intervalo4++;
        }else if (num >= 26 && num <= 50)
        {
            intervalo3++;
        }else if (num >= 51 && num <=75)
        {
            intervalo2++;
        }else if(num >= 76 && num <= 100){
            intervalo1++;
        }
        
    } while (num > -1);
    
    printf("qunatidade de numeros entre 0 e 25: %hd\n", intervalo4);
    printf("qunatidade de numeros entre 26 e 50: %hd\n ", intervalo3);
    printf("qunatidade de numeros entre 51 e 75: %hd\n", intervalo2);
    printf("qunatidade de numeros entre 76 e 100: %hd\n", intervalo1);
}