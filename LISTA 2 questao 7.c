#include<stdio.h>

float h, peso_ideal;
int sexo;

main(){
	
	printf("1:feminino\n");  /* P/mulheres: (62.1 * h) - 44.7 */
	printf("2:masculino\n"); /* P/homens: (72.7 * h) - 58 */
	printf("Informe seu SEXO (1 ou 2): \n");
	scanf("%d", &sexo);
	
	printf("Informe sua ALTURA: ");
	scanf("%f", &h);
	
	if(sexo == 1){
		
		peso_ideal = (62.1 * h) - 44.7;
		
	} else {
		
	peso_ideal = (72.7 * h) - 58;
	}
	
	printf("\nO peso ideal sera: %.2f", peso_ideal);
}
