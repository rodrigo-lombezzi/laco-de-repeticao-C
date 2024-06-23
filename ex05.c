#include <stdio.h>

int main() 
{
    int mulher = 0;
    short maior = 0, idade;
    char sexo, olho[10], cabelo[10];


    while (idade != -1)
    {
        printf("Digite sua idade, digite -1 para sair\n ");
        scanf("%hd", &idade);

        if(idade == -1)
        break;

        printf("Digite seu sexo com M/F\n ");
        scanf(" %c", &sexo);

        printf("Digite a cor do seu cabelo(Loiro)\n ");
        scanf(" %s", &cabelo);

        printf("Digite seu olho(Azul)\n ");
        scanf(" %s", &olho);

        if (idade > maior) 
        {
            maior = idade;
        }

         if (sexo == 'F' && strcmp(olho, "Verde") == 0 && strcmp(cabelo, "Loiro") == 0 && idade >= 18 && idade <= 35) {
            mulher++;
        }

    }

    printf("Maior idade %hd\n", maior);
    printf("Quantidade de mulheres com a idade está entre 18 e 35 anos inclusive e que tenham olhos verdes e cabelos louros %d", mulher);

}
