#include <stdio.h>

int main(){
    int num, i = 0;
    float media = 0;

    while (num != 0)
    {
        printf("Digite um numero\n");
        scanf("%d", & num);

        if (num == 0)
        break;

        if (num % 2 == 0)
        {
            media = num + media;
            i++; 
        }
    }
    media = media/i;
    printf("Media das notas: %f \n", media);
    printf("Media das i: %d \n", i);
}