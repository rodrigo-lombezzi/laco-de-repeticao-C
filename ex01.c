#include <stdio.h>

int main(){
    short nota1, nota2, nota3, cod = 1;
    float media;

    while (cod != 0)
    {
        printf("Digite seu codigo\n");
        scanf("%hd", & cod);

        if (cod == 0)
        break;
        
        printf("Digite sua nota\n");
        scanf("%hd", & nota1);
        scanf("%hd", & nota2);
        scanf("%hd", & nota3);

        media = (nota1 + nota2 + nota3)/3;
        printf("Media das notas: %f \n", media);
    }
    
}