#include <stdio.h>


int main(){
	extern float resistor_fun(float);
	float Resistor, current;
	
	printf("Enter the current value: ");
	scanf("%f", &current);
	
	
	Resistor = resistor_fun(current);
	
	printf("The required resistor should be: ");
	printf("%1.0f Ohms. \n", Resistor);
		
	return 0;
}