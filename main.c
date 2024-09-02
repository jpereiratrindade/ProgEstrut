#include <stdio.h>
#include <locale.h>

union dados {
    int inteiro;
    float decimal;
    char caractere;
};

void firstExerc();
void calculadora();
void descubraWhile();
void descubraFor();
int ParImpar(int valor);
void testeUnion();
unsigned long long fatorial(int n);

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
/*    
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
    
    int x = 10;

    int *p_x;

    p_x = &x;

    printf("Imprime %d\n" , *p_x);
*/
    //Testa o uso de union
    //testeUnion();


    //Testa o uso de função recursiva
    int num = 5;
    unsigned long long resultado = fatorial(num);
    printf("%d! = %llu\n", num, resultado);


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
//******************************************************************************************
void testeUnion()
{
    union dados dado;

    dado.inteiro = 10;
    printf("Inteiro: %d\n", dado.inteiro);

    dado.decimal = 3.14;
    printf("Decimal: %.2f\n", dado.decimal);

    dado.caractere = 'A';
    printf("Caractere: %c\n", dado.caractere);

    // Atenção: cada novo valor sobrescreve o anterior
    printf("Depois de atribuir caractere:\n");
    printf("Inteiro: %d\n", dado.inteiro);   // Valor é sobrescrito, resultado indeterminado
    printf("Decimal: %.2f\n", dado.decimal); // Valor é sobrescrito, resultado indeterminado
    printf("Caractere: %c\n", dado.caractere); // Mostra o valor de 'A'

}
//******************************************************************************************
// Função recursiva para calcular o fatorial
unsigned long long fatorial(int n)
{
    if (n == 0 || n == 1) {
        return 1; // Caso base
    } else {
        return n * fatorial(n - 1); // Chamada recursiva
    }
}
//******************************************************************************************
