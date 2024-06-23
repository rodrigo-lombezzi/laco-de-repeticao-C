#include <stdio.h>

int main() {
    float salario = 1, mediaS = 0, maior = 0, mediaF,Salario100 = 0;
    int quantFilho, i = 0;

    while (salario > 0)
    {
        printf("Digite seu salario, digite -1 para parar ");
        scanf("%f", &salario);

        if (salario < 0)
            break;

        printf("Digite a quantidade de filhos: ");
        scanf("%d", &quantFilho);

        mediaF += quantFilho;

        if (salario <= 100) 
        {
            Salario100++;
        }

        i++;
        mediaS += salario;

        if (salario > maior) 
        {
            maior = salario;
        }
    }

    mediaS /= i;
    mediaF /= i;
    Salario100 = (Salario100 / (float)i) * 100.0;

    printf("Média do salário da população %f\n", mediaS);
    printf("Média do número de filho %f\n", mediaF);
    printf("Maior salario %f\n", maior);
    printf("Percentual de pessoas com salario ate R$100,00: %f\n", Salario100 );
 

  
}
