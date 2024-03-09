#include <stdio.h>
#include <stdlib.h>

int main()
{
    int INDICE=13,SOMA=0,K=0;

    while(K<INDICE){
        K=K+1;
        SOMA=SOMA+K;

    }
    //Sendo assim ,feita toda a soma com K ate se chegar ao indice 13,o resultado final é de 91
    printf("%d",SOMA);

    return 0;
}
