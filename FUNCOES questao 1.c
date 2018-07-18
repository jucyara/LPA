/*1. Faca uma funcao que recebe por parametro o raio de uma esfera e
calcula o seu volume (v = (4. ƒÎ .R 3 )/3).*/

#include<stdio.h>

float volume(float R){
	
	float v;
	
	v = (4 * 3.14 * (R * R * R)) / 3;
	
	return(v);
}

main(){
	
	float R, volume_esfera;
	
	printf("Informe o raio: ");
	scanf("%f", &R);
	
	volume_esfera = volume(R);
	
	printf("O volume da esfera equivale a: %.2f", volume_esfera);
}
