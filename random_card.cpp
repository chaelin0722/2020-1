#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	int i=0,j,n;
	int card[4][13] = {0};
	srand(time(0));
	while(i<5){  // 5Àå »ÌÈ÷¸é ³¡ 
		n = rand()%52;
		if(!card[n/13][n%13]){
			card[n/13][n%13] =1;
			i++;
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			if(card[i][j]){
				switch(i){
					case 0: printf("S"); break;
					case 1: printf("D"); break;
					case 2: printf("H"); break;
					case 3: printf("C"); break;
				}
				switch(j){
					case 0: printf("A "); break;
					case 10: printf("J "); break;
					case 11: printf("Q "); break;
					case 12: printf("K"); break;
					default:
						printf("%d ", j+1);
						
				}
			}
		}
	}
	
	
	return 0;
}


