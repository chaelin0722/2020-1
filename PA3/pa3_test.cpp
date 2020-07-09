#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){
	//암호화 복호화 
	
	char num[4];
	int i;	
	
	;
	
	for(i=31;i>=0;i--){
		printf("%d", (num >> i)&i);
	}
	
	return 0;
}

