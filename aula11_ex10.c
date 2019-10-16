#include <stdio.h>

/* Faça  um  programa  que  receba  a  altura  e  o  peso  de  uma  pessoa.  De  acordo  com  a  
tabela  a  seguir,  verifique  e  mostra  qual  a  classificação  dessa  pessoa */

int main(){

    double Al, Ps; //Altura e Peso

    //Receber os dados de altura e peso fornecidos pelo usuario.
    printf("Digite a Altura e depois o peso.\n");
    scanf("%lf\n%lf", &Al, &Ps);

/*primeiro teste de altura nos primeiros if e nos else if.
Dentro desses if e else if estão os teste de peso. 
E após cada teste imprime a classificação da pessoa caso se enquadre naquele caso.
*/
 if(Al < 1.20 ){
    if (Ps <= 60){ 
        printf("A");
    }else if(Ps > 60 && Ps <= 90){  
        printf("D");
    }else if(Ps > 90){
        printf("G");
    }
 }else if(Al >= 1.20 && Al <=1.70){
    if(Ps <= 60){
        printf("B");
    }else if(Ps > 60 && Ps <= 90){
        printf("E");
    }else if(Ps > 90){
    p   rintf("H");
    }
 }else if(Al > 1.70){
    if(Ps <= 60){
        printf("C");
    }else if(Ps > 60 && Ps <= 90){
        printf("F");
    }else if(Ps > 90){
        printf("I");
    }
 }

    return 0;
}
