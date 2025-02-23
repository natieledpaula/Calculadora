#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char operacao;
    double numero1, numero2;
    float resultado;

    // Operação
    printf("Bem vindo(a) a calculadora! \n");
    printf("Digite a operação que deseja fazer (+, -, *, /): \n");
    scanf("%c", &operacao);

    // Número 1
    printf("Digite o primeiro número: \n");
    scanf("%lf", &numero1);

    // Número 2
    printf("Digite o segundo número: \n");
    scanf("%lf", &numero2);

    // Estrutura condicional
    switch(operacao) {
        case '+' :
            resultado = numero1 + numero2;
            break;
        case '-' :
             resultado = numero1 - numero2;
            break;
        case '*' :
             resultado = numero1 * numero2;
            break;
        case '/' :
            if (numero2 == 0) {
                printf("Divisão por 0 não é permitida");
                return 1;
            } else {
                resultado = numero1 / numero2;
            }
            break;
        default:
            printf("Erro você escreveu uma operação inválida");
            return 1;
    }

    printf("Resultado é: %.2f", resultado);
    return 0;
}
