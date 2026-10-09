#include <stdio.h> //"Traga para o meu código o arquivo que contém as funções de entrada e saída padrão"
#include <stdlib.h> //"Traga para o meu código o arquivo que contém as funções de alocação e liberação de memória" - Biblioteca padrão de utilidades gerais

int main () {

    // 1. Declaração de variáveis (Unidade I) //Em C, para criar qualquer variável, a estrutura básica é: tipo nome; //Exemplo: int idade;
    
    int matricula;
    char nome[50]; //cria uma variável do tipo char (caractere) com capacidade para armazenar 50 caracteres, portanto, é um vetor de caracteres (string).
                  //[50] indica que a variável nome pode armazenar até 49 caracteres, pois o último espaço é reservado para o caractere nulo '\0' que indica o final da string.
    
    float nota1, nota2, nota3; //Essa linha cria três variáveis do tipo float (número real) chamadas nota1, nota2 e nota3.
    float media; //Essa linha cria uma variável do tipo float (número real) chamada media.
    float frequencia;

    // 2. Cabeçaho do Sistema
    printf("=================================================\n");
    printf("    SGA-C : Sistema de Gerenciamento Acadêmico   \n");
    printf("      [ Etapa 1 - Cadastro Individual]           \n");   
    printf("=================================================\n\n");


    //3. Entrada de Dados com scanf()
    printf("Digite a matrícula do aluno: ");
    scanf("%d", &matricula); //O operador & é usado para obter o endereço de memória da variável matricula, permitindo que scanf() armazene o valor digitado pelo usuário nessa variável.
    
    printf("Digite o nome do aluno: ");
    scanf("%s", nome); //O operador & é usado para obter o endereço de memória da variável nome, permitindo que scanf() armazene o valor digitado pelo usuário nessa variável.

    pritnf("Digite a Nota 1 (0 a 10): ");
    scan("xf", &nota1);

    printf("Digite a Nota 2 (0 a 10): ");
    scanf("%f", &nota2);

    printf("Digite a Nota 3 (0 a 10): ");
    scanf("%f", &nota3);

    printf("Difite a frequência (em %%): ");
    scanf("%f", &frequencia);


}