#include <stdio.h>
int main(void){
	int m,d,y;
	printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%2d",&m,&d,&y);
	if(m==0 && d==0 && y==0) goto quit;
	for(;;){
		int M,D,Y;
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%2d",&M,&D,&Y);
		if(M==0 && D==0 && Y==0){
			break;
		}
		else{
			if(Y<=y || M <=m || D<= d){
				y=Y;
				m=M;
				d=D;
			}
		}
	}
	printf("%d/%d/%2.2d is the earliest date ",m,d,y);
	quit: return 0;
}
