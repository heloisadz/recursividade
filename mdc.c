#include <stdio.h>
int mdc(int a,int b){
   printf("mdc (%d,%d)\n", a, b);
    if(b==0){ 
        return a;
    }
     
    return mdc(b, a%b);
}

int main(){
    int a, b;
    printf("Digite valor de a: ");
    scanf("%d", &a);
    printf("Digite valor de b: ");
    scanf("%d", &b);

    printf("o mdc eh: %d \n", mdc(a,b));

    return 0;
}