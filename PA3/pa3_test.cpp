#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){
	//��ȣȭ ��ȣȭ 
	
	char num[4];
	int i;	
	
	;
	
	for(i=31;i>=0;i--){
		printf("%d", (num >> i)&i);
	}
	
	return 0;
}

