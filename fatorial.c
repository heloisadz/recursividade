#include <stdio.h>
unsigned long long fatorial(unsigned n){
    if (n<=1){
        return 1;
    }
    printf("descendo do indice %d\n", n);
    unsigned long long resultado = n * fatorial(n-1);
    printf("fat[%d]: %llu\n", n, resultado);
    if(n<=4){
    printf("subindo para o indice %d\n", n+1);
    }
    return resultado;
}

int main(){
    int entrada;
    printf("Digite a entrada: ");
    scanf("%d", &entrada);

    printf("saida: %llu \n", fatorial(entrada));

    return 0;
}