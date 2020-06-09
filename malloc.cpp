/*메모리 동적 할당 */
#include<stdio.h>
#include<stdlib.h>

int main(void){
	int i=0;
	char *p;
	p = (char*)malloc(4);
	*p = 'A';
	*(p+1) = 'B';
	p[2] ='C';
	*(p+3) = 'D';
	for(i=0;i<4;i++){
		printf("%c", *(p+i));
	}
	printf("\n");
	
	
	return 0;	
}
