#include <stdio.h>
#include <math.h>

int main(){
    int i;
    float vetor[10], media = 0, variancia = 0, d,MEDIA=0,VARIANCIA=0,VAS=0;
    printf("Digite os 10 numeros do vetor: ");
    
    for(i = 0; i < 10; i++){
        scanf("%f", &vetor[i]);
        media = (media + vetor[i]) 
    }
    MEDIA=media/10;
    
    for(i = 0; i < 10; i++)
    {
        variancia = pow(vetor[i] - MEDIA, 2);
        VAS=VAS+variancia;
    }
    VARIANCIA=VAS/9;
    d = sqrt(VARIANCIA);
    printf("Desvio padrao: %f\n", d);
    return 0;
}
