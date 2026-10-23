
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 1;
    int bonificacao;
    int total = 0;

    while (i <= 20){
        bonificacao = i * 10;
        printf("Produto %d recebeu R$ %d\n", i, bonificacao);
        total = total + bonificacao; //ou total += bonificacao;
        i++;
    }

    printf("Valor total de beneficiações R$ %d\n", total);

    return 0;
}