// calculate the dimension of a box after providing
// its weight,length,height
#include <stdio.h>
int main(void)
{
	int height,length,width,weight,volumn;
	printf("Enter the Box height : ");
	scanf("%d",&height);
	printf("Enter the Box length: ");
	scanf("%d",&length);
	printf("Enter the Box width: ");
	scanf("%d",&width);
	printf("Volume: %d\n",height*length*width);
	printf("Dimension weight: %d\n",(height*length*width)/166);
	return 0;
}