#include<stdio.h>

int gols_gremio, gols_internacional;

main(){
	
	printf("Informe o numero de gols do GREMIO: ");
	scanf("%d", &gols_gremio);
	
	printf("Informe o numero de gols do INTERNACIONAL: ");
	scanf("%d", &gols_internacional);
	
	if((gols_gremio > gols_internacional) && (gols_internacional < gols_gremio)){
		
		printf("GREMIO e o vencedor!\n ");
		
	} else if((gols_internacional > gols_gremio) && (gols_gremio < gols_internacional)){
		
		printf("INTERNACIONAL e o vencedor!\n ");
		
	} else
	
	printf("EMPATE!!");
}
