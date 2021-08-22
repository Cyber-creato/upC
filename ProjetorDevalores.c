#include <stdlib.h>
#include <stdio.h>

float main (){

float m2, vf0, vf1, vf2, vf3, vf4;
printf("Bem vindo a calculadora de projecao semestral da valorizacao de terrenos nas regioes \nGuaratiba, \nMadureira, \nRealengo, \nTanque, \nPavuna.\n");
printf("\nInsira a medida do terreno em m2: \n");
scanf("%f", &m2);

float v[5] = {1.418, 1.385, 1.47, 1.37, 1.455};

vf0 = m2 * 3218 * v[0];
vf1 = m2 * 2930 * v[1];
vf2 = m2 * 2602 * v[2];
vf3 = m2 * 3649 * v[3];
vf4 = m2 * 2252 * v[4];

printf("O valor estimado para a metragem quadrada indicada no final dos semestre nas regioes sao: \n\n");

printf("Guaratiba:%2.f\n", vf0);
printf("Madureira:%2.f\n", vf1);
printf("Realengo:%2.f\n", vf2);
printf("Tanque:%2.f\n", vf3);
printf("Pavuna:%2.f\n", vf4);

    return 0;
}
