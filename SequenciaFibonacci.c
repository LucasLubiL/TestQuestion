#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,valor;
    int aux,primeiro=0,segundo=1,cont=0;

    printf("Digite um valor para a sequencia de Fibonacci:\n");
    scanf("%d",&x);

    printf("Digite um numero para sabermos se ele esta ou nao na sequencia de Fibonacci:\n");
    scanf("%d",&valor);

    for(int i=0;i<=x;i++){
        aux=primeiro+segundo;
        primeiro=segundo;
        segundo=aux;
        if(aux==valor){
            cont=cont+1;
        }
    }

    if(cont==1){
        printf("O valor digitado: %d Pertence a sequencia de Fibonacci!\n",valor);
    }else{
        printf("O valor digitado: %d NAO pertence a sequencia de Fibonacci!\n",valor);
    }


    return 0;
}
