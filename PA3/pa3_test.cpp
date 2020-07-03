#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){
	//암호화 복호화 
	
	unsigned int num[4];
	int i;	
	
	num = {C8,D6,FC,86};
	
	for(i=31;i>=0;i--){
		printf("%d", (num >> i)&i);
	}
	
	return 0;
}

