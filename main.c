#include <stdio.h>
#include <locale.h>

void firstExerc();
void calculadora();
void descubraWhile();
void descubraFor();
int ParImpar(int valor);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Executa primeiro exercício
    //firstExerc();

    //Exercíco de calculadora em c
    //calculadora();

    //Decubra se o número até 100 é par ou ímpar - while
    //descubraWhile();

    //Decubra se o número até 100 é par ou ímpar - for
    //descubraFor();

    //Função par ou impar
    int valor = 0;

    printf("Digite valor para verificar se é par ou não: ");
    scanf("%i", &valor);

    if (ParImpar(valor)== 1)
    {
        printf("O valor %i é par!\n", valor);
    }else
    {
        printf("O valor %i é ímpar!\n", valor);
    }
    
    

    return 0;
}
//******************************************************************************************
void firstExerc()
{
    int valor = 0;

    printf("Hello World!\n");
    printf("Digite valor: ");
    scanf("%d", &valor);

    if(valor%2 == 0){
        printf("O número %i é par!\n", valor);
    } else{
        printf("O número %i não é par!\n", valor);
    }

}
//******************************************************************************************
void calculadora()
{
    int valor1 = 0;
    int valor2 = 0;
    char op;
    float res = 0.00;

    printf("Digite a operação desejada:");
    scanf("%c", &op);
    printf("Digite o primeiro valor: ");
    scanf("%i", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%i", &valor2);

    switch (op)
    {
    case '+':
        res = valor1 + valor2;
        break;
    case '-':
        res = valor1 - valor2;
        break;
    case '*':
        res = valor1 * valor2;
        break;
    case '/':
        res = valor1 / valor2;
        break;
    
    default:
        printf("Operação inválida!\n");
        break;
    }

    printf("O resultado da %c do valor %d com o valor %d = %f\n", op, valor1, valor2, res);

}
//******************************************************************************************
void descubraWhile()
{
    int valor = 0;

    while (valor<=100)
    {
        if (valor%2==0)
        {
            printf("O valor %i é par!\n", valor);
        }else
        {
            printf("O valor %i é ímpar!\n", valor);
        }
        
        valor++;
    }

}
//******************************************************************************************
void descubraFor()
{

    for (size_t i = 0; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("O valor %i é par!\n", i);
        }else
        {
            printf("O valor %i é ímpar!\n", i);
        }
        
        
    }
    
}
//******************************************************************************************
int ParImpar(int valor)
{
    if (valor % 2 == 0)
    {
        return 1;
    }else
    {
        return 0;
    }
    
}