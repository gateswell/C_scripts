#include <stdio.h>
int main(void){
	int days,std;
	printf("Enter number of days in month: ");
	scanf("%d",&days);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d",&std);
	int i;
	for(i=1;i<std;i++){
		printf("   ");
	}
	for (i=1;i<=days;i++){
		if((i+std-1)%7==0){
			printf("%3d\n",i);
		}
		else{
			printf("%3d",i);
		}
	}
	return 0;
}
