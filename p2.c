//Rafael Medeiros da silva 

#include <stdlib.h>
#include <stdio.h>

float calculaIDH(float E, float L, float R){
float IDH;

if(E >= L + R){
IDH = E * L * R / ((E + L + R)/3);
}else{
if(E < L + R){
IDH = (E + L + R)/3;
}
}
printf("\nO IDH para os valores mencionados e %.2f\n", IDH);

return (IDH);
}


void exibeDesenvolvimento(float IDH){

if(IDH == 0){
    printf("Nenhum desenvolvimento humano\n\n");
}if(0 < IDH && IDH < 0.5){
    printf("\n\nBaixo desenvolvimento humano\n\n");
}if(0.5 <= IDH && IDH < 0.8){
    printf("\n\nMedio desenvolvimento humano\n\n");
}if(0.8 <= IDH && IDH < 1.0){
    printf("\n\nAlto desenvolvimento humano\n\n");
}if(IDH == 1.0){
    printf("\n\nDesenvolvimento humano total\n\n");
 }
}


int main(){
float E,L,R,IDH;

printf("\n\nSeja bem vindo a calculadora de IDH\n\n");

printf("\nPor gentileza informe o coeficiente da educacao\n");
scanf("%f",&E);
printf("Por gentileza informe o coeficiente da longevidade\n");
scanf("%f",&L);
printf("Por gentileza informe o coeficiente da saude\n");
scanf("%f",&R);

IDH = calculaIDH(E, L, R);
exibeDesenvolvimento(IDH);  
  
   return 0; 
}