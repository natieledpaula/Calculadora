#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char operacao;
    double numero1, numero2;
    float resultado;

    // Opera��o
    printf("Bem vindo(a) a calculadora! \n");
    printf("Digite a opera��o que deseja fazer (+, -, *, /): \n");
    scanf("%c", &operacao);

    // N�mero 1
    printf("Digite o primeiro n�mero: \n");
    scanf("%lf", &numero1);

    // N�mero 2
    printf("Digite o segundo n�mero: \n");
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
                printf("Divis�o por 0 n�o � permitida");
                return 1;
            } else {
                resultado = numero1 / numero2;
            }
            break;
        default:
            printf("Erro voc� escreveu uma opera��o inv�lida");
            return 1;
    }

    printf("Resultado �: %.2f", resultado);
    return 0;
}
