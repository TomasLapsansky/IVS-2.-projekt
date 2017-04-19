#include "math_library.h"
#include <stdio.h>

double priemer(double* pole, int velkost);
double power_suma(double* pole, int velkost, double priemer);

int main(void)
{
	int velkost;
	bool error = false;
	
	scanf("%d", &velkost);
	
	double pole[velkost];
	
	for(int i = 0; i < (velkost); i++)
	{
		scanf("%lf", &pole[i]);
	}

	double x_priemer = priemer(pole, velkost);
	
	double part_result = power_suma(pole, velkost, x_priemer);
	
	double result = divis(part_result, velkost, &error);
	
	result = root(result, &error);
	
	if(error)
	{
		fprintf(stderr, "Chyba v odmocnine!\n");
		return 0;
	}
	
	printf("Smerodajna odchylka = %lf\n", result);
	
	return 0;
}

double priemer(double* pole, int velkost)
{
	double sucet = 0;
	bool error = false;
	
	for(int i = 0; i < velkost; i++)
	{
		sucet = plus(sucet, pole[i], &error);
	}
		
	double result = divis(sucet, velkost, &error);
	
	if(error)
		fprintf(stderr, "Chyba v priemere!\n");
	
	return result;
}

double power_suma(double* pole, int velkost, double priemer)
{
	double result = 0;
	bool error = false;
	
	for(int i = 0; i < velkost; i++)
	{
		double rozdiel = minus(pole[i], priemer, &error);
		double pwr = power(rozdiel, 2, &error);
		
		result = plus(result, pwr, &error);
	}
	
	if(error)
		fprintf(stderr, "Chyba v sume!\n");
	
	return result;
}
