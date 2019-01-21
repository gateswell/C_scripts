#include <stdio.h>
#include <ctype.h>

int main(void){
	char sen;
	int num=0;
	printf("Enter a sentence: ");
	while((sen=getchar())!='\n'){
		sen=toupper(sen);
		switch(sen){
			case 'A':case 'E':case 'I':case 'O':case 'U':
				num += 1;break;
		}
	}
	printf("Your sentence contains %d vowels.",num);
	return 0;
}
