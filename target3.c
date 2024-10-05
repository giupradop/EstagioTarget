/*Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na linguagem que desejar, que calcule e retorne:
• O menor valor de faturamento ocorrido em um dia do mês;
• O maior valor de faturamento ocorrido em um dia do mês;
• Número de dias no mês em que o valor de faturamento diário foi superior à média mensal. 
 Podem existir dias sem faturamento, como nos finais de semana e feriados. Estes dias devem ser ignorados no cálculo da média;
*/

#include <stdio.h>

int main(){
    //EXEMPLO DE VETOR DE FATURAMENTO
    float faturamento[30] = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000,
                              11000, 12000, 13000, 14000, 0, 16000, 17000, 18000, 19000, 20000,
                              21000, 22000, 23000, 24000, 25000, 26000, 27000, 28000, 29000, 30000};
    float media = 0, menor = faturamento[0], maior = faturamento[0];
    int i, j, dias_validos = 0, dias = 0;

    for(i = 0; i < 30; i++){
        media += faturamento[i];
        if(faturamento[i] < menor){
            menor = faturamento[i];
        }
        if(faturamento[i] > maior){
            maior = faturamento[i];
        }
    }

    for (j = 0; j < 30; j++){
        if(faturamento[j] != 0){
            dias_validos++; 
        }
    }

    media /= dias_validos;

    for(i = 0; i < 30; i++){
        if(faturamento[i] > media){
            dias++;
        }
    }

    printf("Menor faturamento: %.2f\n", menor);
    printf("Maior faturamento: %.2f\n", maior);
    printf("Media de faturamento: %.2f\n", media);
    printf("Dias com faturamento acima da media: %d\n", dias);

    return 0;
}