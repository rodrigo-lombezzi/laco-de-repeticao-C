#include <stdio.h>

int main() 
{
    int i = 13, cont = 0;
    float media = 0;
    while (i < 72)
    {
        i++;
        cont++;
        media+=i;
    }
    media /= cont;
    printf("Media %f", media);

}
