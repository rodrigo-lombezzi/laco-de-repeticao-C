#include <stdio.h>

int main() 
{
    int i, salarioMulher = 0;
    short idade, maiorI = 0, menorI;
    char sexo;
    float salario, mediaS = 0, somaS = 0;

    for (i = 0; i < 2; i++) 
    {
        printf("Digite seu salario\n");
        scanf("%f", &salario);

        somaS += salario;

        printf("Digite sua idade\n");
        scanf("%hd", &idade);

        if (i == 0) 
        {
            menorI = idade;
        }

        if (idade > maiorI) 
        {
            maiorI = idade;
        }
        if (idade < menorI) 
        {
            menorI = idade;
        }

        printf("Digite seu sexo com M/F\n");
        scanf(" %c", &sexo);

        if (sexo == 'F' && salario <= 100) 
        {
            salarioMulher++;
        }
    }

    mediaS = somaS / i;

    printf("A media de salario %f\n", mediaS);
    printf("Maior idade %hd\n", maiorI);
    printf("Menor idade %hd\n", menorI);
    printf("Quantidade de mulheres com salario ate R$100,00 %d\n", salarioMulher);

}
