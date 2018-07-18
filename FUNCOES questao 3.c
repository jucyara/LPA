/*3. Faça uma função que recebe por parâmetro os valores necessário para
o cálculo da fórmula de báskara e retorna, também por parâmetro, as
suas raízes, caso seja possível calcular.*/

#include<stdio.h>

float bhaskara(float a, float b, float c){
	
	float x1, x1_real, x2, x2_real, delta;
	
	if(a == 0){
		
		printf("Nao e uma equacao do segundo grau, a = 0\n");
		
	} else{
		
		delta = (b * b) - 4*a*c;
		
		if(delta < 0){
			
			x1_real = -b/(2*a);
			x1 = sqrt(delta) / (2*a);
			
			x2_real = -b/(2*a);
			x2 = -sqrt(delta) / (2*a);
			
			printf("x1 = %.4f + %.4f\n", x1_real, x1);
			printf("x2 = %.4f + %.4f\n", x2_real, x2);
			
		} else{
			
			x1_real = (-b + sqrt(delta))/(2*a);
			x2_real = (-b - sqrt(delta))/(2*a);
			
			printf("x1 = %.4f\n", x1_real);
			printf("x2 = %.4f\n", x2_real);
		}
	}
}

main(){
	
	int a, b, c, resultado;
	
	printf("Informe o valor de a: ");
	scanf("%i", &a);
	
	printf("Informe o valor de b: ");
	scanf("%i", &b);
	
	printf("Informe o valor de c: ");
	scanf("%i", &c);
	
	resultado = bhaskara(a,b,c);	
}
