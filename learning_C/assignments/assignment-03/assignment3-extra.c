
#include <stdio.h>
#include <stdlib.h> //necessário para malloc() e free()


int main() {

    char first_name[25];
    char last_name[25];


    printf("Enter your first name: ");
    scanf("%s", first_name);

    //validação de entrada de nome
    if (first_name > 25) {
        printf("If you are a noble, get out of here, if not, your name is too long, please enter a name with less than 25 characters.\n");
        return 1;
    }

    //alocação dinâmica de memória para o nome
    int n = strlen(first_name) + 1;
    char *first_name_dynamic = (char *)malloc(n * sizeof(char));

    //validação de alocação de memória
    if (first_name_dynamic == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter your last name: ");
    scanf("%s", last_name);

    printf("Hello, %s %s!\n", first_name, last_name);
}