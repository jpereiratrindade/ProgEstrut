#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int valor = 0;

    printf("Hello World!\n");
    printf("Digite valor: ");
    scanf("%d", &valor);

    if(valor%2 == 0){
        printf("O número %i é par!\n", valor);
    } else{
        printf("O número %i não é par!\n", valor);
    }

    return 0;
}
