#include <stdio.h>
#include <string.h>


typedef struct{
    float peso;
    char digitosPeso[16];
} PRODUTO;

int contarPosicoes(float numero) {
    PRODUTO stringPeso; // Definindo um buffer para armazenar a representação do número como string
    sprintf( stringPeso.digitosPeso,"%.2f", numero); // Formata o número com duas casas decimais e armazena em buffer
    return strlen(stringPeso.digitosPeso); // Retorna o tamanho da string
}

int main() {
    float valorPeso = 120.23; // produto[i].peso
    int posicoes = contarPosicoes(valorPeso); 
    printf("O numero %.2f possui %d posicoes.\n", valorPeso, posicoes);
    return 0;
}
