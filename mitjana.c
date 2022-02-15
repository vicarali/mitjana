#include <stdio.h>
int main() {
    float resta=0.0;
    float mitjana=0.0;
    float nou_valor=0.0;
    int numero_repeticions=0;
    char consulta='s';

    while(consulta=='s') {
        printf("Dona la seg�ent dada: ");
        scanf("%f",&nou_valor);
        suma=suma+nou_valor;
        numero_repeticions=numero_repeticions+1;
        printf("Vols continuar (s/n): ");
        scanf("%s",&consulta);
    }

    mitjana=suma/numero_repeticions;
    printf("La mitjana resultant �s: %.2f\n",mitjana);
    return 0;
}
