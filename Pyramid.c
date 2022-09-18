#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x,y,a,b;
	scanf("%d",&a);
	for(y=a;y>0;y--){
		for(x=y;x>0;x--){
			printf(" ");
		}
		for(b=a-y+1;b>0;b--){
			printf("* ");
		}
			
		printf("\n");
	}
	
	
	
	
	
	
	
	return 0;
}
