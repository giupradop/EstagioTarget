#include <stdio.h>

int main(){

float SP = 67836.43, RJ = 36678.66, MG = 29229.88, ES = 27165.48, Outros = 19849.53, total = 0;

total = SP + RJ + MG + ES + Outros;

printf("Percentual de representacao de SP: %.2f%%\n", (SP/total)*100);
printf("Percentual de representacao de RJ: %.2f%%\n", (RJ/total)*100);
printf("Percentual de representacao de MG: %.2f%%\n", (MG/total)*100);
printf("Percentual de representacao de ES: %.2f%%\n", (ES/total)*100);
printf("Percentual de representacao de Outros: %.2f%%\n", (Outros/total)*100);

return 0;
}