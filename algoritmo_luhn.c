#include <stdio.h>
#include <string.h>
#include <cs50.h>

int calcularSomaMult(char espaco[], int length);
int calcularSomaResDig(char espaco[], int length);

int main(void)
{
    long long n = get_long_long("Enter number: ");
    char espaco[20]; // Espaço que receberá a string (tamanho máximo é 20 para acomodar números long long)
    sprintf(espaco, "%lld", n); // sprintf() converte um 'long long' para string
    int length = strlen(espaco);

    int somaMult = calcularSomaMult(espaco, length);
    int somaResDig = calcularSomaResDig(espaco, length);

    int somaDigitos = somaResDig + somaMult;

    if (somaDigitos % 10 == 0)
    {
        printf("Valid card!\n");
    }
    else
    {
        printf("Invalid Card!\n");
    }
    return 0;
}

// Função para calcular a soma dos dígitos multiplicados por 2
int calcularSomaMult(char espaco[], int length)
{
    int somaMult = 0;
    for (int i = length - 2; i >= 0; i -= 2)
    {
        int temp = (espaco[i] - '0') * 2;
        
        // Somar os dígitos individualmente
        while (temp > 0)
        {
            somaMult += temp % 10; // Pega o último dígito do número
            temp /= 10; // Remove o último dígito do número
        }
    }
    return somaMult;
}

// Função para calcular a soma dos dígitos não multiplicados por 2
int calcularSomaResDig(char espaco[], int length)
{
    int somaResDig = 0;
    for (int i = length - 1; i >= 0; i -= 2)
    {
        somaResDig += espaco[i] - '0';
    }
    return somaResDig;
}
