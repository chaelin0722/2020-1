//make8.c

#include <stdio.h>
int main(void){
	int x,y;
	int bucketA=5, bucketB=0, bucketC=6;
	
	char b = '-';
	char p = '+';
	char v = '|';
	int i;
	for(i=0;i<4;i++){	
		printf("%c%6c\n", v, v);
	}
	printf("|     |           |-----|\n");
	printf("|-----|  |     |  |     |\n");
	for(i=0; i<4;i++){		
		printf("%c%6c%3c%6c%3c%6c\n", v, v, v, v, v, v);
	}
	printf("+-----+  +-----+  +-----+\n");	
	
	while( bucketA != 8){
		printf("Enter a command: ");
		scanf("%d%d", &x, &y);
		
		//1,2,3 아닌 수를 입력시 에러처리 
		if( x>3 || x<1 || y>3 || y<1 ) printf("Error!\n\n");
		// 같은 숫자 넣을때 상태만 보여주기
		else if( x ==y ){
			int i;
			for(i=10; i>6; i--){
				if( i==bucketA) printf("|-----|\n");
				else { 
					printf("%c%6c\n", v, v);
				}
		     } //end for 
				if( bucketA ==6) printf("|-----|");
				else printf("|     |");
				
				if(bucketC == 6) printf("%12c-----|\n", v);
				else printf("%12c%6c\n", v, v);
				for(i=5; i>0; i--){
					if( i != bucketA && i != bucketB && i!= bucketC){
						printf("%c%6c%3c%6c%3c%6c\n", v,v,v,v,v,v);
					}else{
						if ( i == bucketA){
							printf("|-----|");
						}else {
							printf("|     |");
						}
						if( i == bucketB ){
							printf("%3c-----|", v);
						}else printf("%3c%6c", v, v);
						if( i == bucketC ){
							printf("%3c-----|\n",v);
						}else printf("%3c%6c\n", v, v);
					}
				} //end for
				
				printf("+-----+  +-----+  +-----+\n");	
			}
		//숫자를 제대로 넣어서 물 옮기는 경우 
		else{
			
			if(x == 1){
				if(y == 2){
					if(bucketA+bucketB <= 5){
						bucketB = bucketA+bucketB;
						bucketA = 0;
					}else{
						bucketA = bucketA-(5-bucketB);
						bucketB = 5;
					}	
				}else if( y == 3){
					if(bucketA+bucketC<= 6){
						bucketC = bucketA+bucketC;
						bucketA = 0;
					}else{
						bucketA = bucketA-(6-bucketC);
						bucketC = 6;
					}	
				}
			}else if(x == 2){
				if(y == 1){
					if(bucketB+bucketA<= 10){
						bucketA = bucketB+bucketA;
						bucketB = 0;
					}else{
						bucketB = bucketB-(10-bucketA);
						bucketA = 10;
					}	
				}else if( y == 3){
					if(bucketB+bucketC<= 6){
						bucketC = bucketB+bucketC;
						bucketB = 0;
					}else{
						bucketB = bucketB-(6-bucketC);
						bucketC = 6;
					}	
				}
			}else if(x==3){ //x가 3일때 
				if(y == 1){
					if(bucketC+bucketA<= 10){
						bucketA = bucketC+bucketA;
						bucketC = 0;
					}else{
						bucketC = bucketC-(10-bucketA);
						bucketA = 10;
					}	
				}else if(y == 2){
					if(bucketC+bucketB<= 5){
						bucketB = bucketC+bucketB;
						bucketC = 0;
					}else{
						bucketC = bucketC-(5-bucketB);
						bucketB = 5;
					}	
				}	
				
			}
			// 조건문 거른 후 출력! 
			int i; 
			for(i=10; i>6; i--){
			    i==bucketA ? printf("|-----|\n") : printf("%c%6c\n", v, v);
				} 
				
				bucketA == 6 ? printf("|-----|") : printf("|     |");
				
				bucketC == 6 ? printf("%12c-----|\n",v) : printf("%12c%6c\n", v, v);
			
				for(i=5; i>0; i--){
						if ( i == bucketA){
							printf("|-----|");
						}else printf("|     |");
						
						if( i == bucketB ){
							printf("%3c-----|", v);
						}else printf("%3c%6c", v, v);
						if( i == bucketC ){
							printf("%3c-----|\n",v);
						}else printf("%3c%6c\n", v, v);
				} //end for
				printf("+-----+  +-----+  +-----+\n");	
			} //end else 
	}//end while
	
	printf("Congratulations! You've got 8-liter water!\n");
	return 0;
		
	}

