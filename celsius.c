// trans fahrenheit to celsius
#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)
int main(void)
{
	float fah;
	printf("Enter a fahrenheit temp: ");
	scanf("%f",&fah);
	printf("celsius temperature is: %fC\n",(fah-FREEZING_PT)*SCALE_FACTOR);
	return 0;
}