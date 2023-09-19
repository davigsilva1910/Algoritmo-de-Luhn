# Configuração da Biblioteca CS50

Este guia explicará como configurar a biblioteca CS50 em seu projeto.

## Pré-requisitos

Antes de começar, certifique-se de ter os seguintes pré-requisitos em seu sistema:

- [MinGW](http://www.mingw.org/) (para sistemas Windows) ou ambiente de desenvolvimento C/C++ compatível com Unix/Linux (para sistemas Unix/Linux).

## Passos de Configuração

Siga estas etapas para configurar a biblioteca CS50 em seu projeto:

1. **Baixe a Biblioteca CS50:**

   Você pode baixar a biblioteca CS50 a partir do [repositório oficial](https://github.com/cs50/libcs50) no GitHub.

2. **Descompacte a Biblioteca:**

   Descompacte o arquivo ZIP baixado (ou clone o repositório, se preferir) para obter os arquivos da biblioteca CS50.

3. **Copie os Arquivos para o seu Projeto:**

   - Copie o arquivo `cs50.c` para o diretório do seu projeto.
   - Copie o arquivo `cs50.h` para a pasta `include` do MinGW. Certifique-se de que o arquivo `cs50.h` esteja localizado em `C:\MinGW\include` (ou no caminho correto do seu ambiente MinGW).

4. **Configuração no seu Projeto:**

   No seu projeto, certifique-se de incluir o cabeçalho `cs50.h` onde você deseja usar as funções da biblioteca CS50:

   #include <cs50.h>

4. **Compilação do seu Projeto:**

    Ao compilar seu projeto, o GCC deve encontrar automaticamente o arquivo `cs50.h` na pasta `include` do MinGW. Você pode compilar seu programa da seguinte maneira:

    gcc -o meu_programa meu_programa.c -lcs50

5. **Exemplo de Uso**

    Aqui está um exemplo de como usar a biblioteca CS50 em seu código

    #include <stdio.h>
    #include <cs50.h>

    int main(void)
    {
        int numero = get_int("Digite um número:");
        printf("Você digitou: %d\n", numero);
        return 0;
    }

**Dúvida ou Precisa de Ajuda?**

    Se você tiver alguma dúvida ou precisar de ajuda ao configurar a biblioteca CS50, sinta-se à vontade para entrar em contato diretamente ou pesquise em fóruns de desenvolvimento.

    Aproveite o desenvolvimento do seu projeto!

## Algoritmo de Luhn

    O algoritmo de Luhn, também conhecido como algoritmo de soma de verificação de módulo 10, é um método simples utilizado para verificar a validade de números de cartões de crédito, números de identificação e outros códigos numéricos. Ele funciona calculando a soma dos dígitos dos números em posições específicas, aplicando regras de multiplicação intercalada e verificando se o resultado é divisível por 10. Se for divisível por 10, o número é considerado válido; caso contrário, é identificado como inválido, ajudando a evitar erros de digitação e detectar números falsificados em sistemas que utilizam essa verificação.

## Iniciais de números dos cartões

    Visa: Começa com 4.
    Mastercard: Geralmente começa com 51, 52, 53, 54, 55 ou, ocasionalmente, 56.
    American Express (Amex): Costuma começar com 34 ou 37.

## Notas

    Utilizei mensagens de saída em inglês para evitar erros no processamento de caracteres acentuados ou especiais.