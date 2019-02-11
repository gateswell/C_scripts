// calculate the volumn after providing dimeter size
#include <stdio.h>
#define PI 3.141592658f
#define SCALE_FACTOR (4.0f/3.0f)
int main(void)
{
	float dim;
	printf("Enter a dimeter: ");
	scanf("%f",&dim);
	printf("Volumn is: %fm^3\n",dim*dim*dim*PI*SCALE_FACTOR);
	return 0;
}