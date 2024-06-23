#include <stdio.h>

int main(){
    int i;
    short num, dentro = 0 , fora = 0;
    for(i = 0; i < 10; i++)
    {
        printf("Digite um numero\n");
        scanf("%hd", &num);

        if(num >= 10 && num <= 20)
        {
            dentro++;
        }else
        {
            fora++;
        }
    
    }

    printf("Numeros entre 10 e 20: %hd\n", dentro);
    printf("Numeros fora de 10 e 20: %hd\n", fora);
}