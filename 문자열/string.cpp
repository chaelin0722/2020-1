#include<stdio.h>
int main(void){
	char *p;
	p = "abc";
	printf("%X\n", p); //abc�� �ּ� 
	printf("%c\n",p[0]);
	printf("%c\n", p[1]); 
	printf("%c\n",p[2]);
	printf("%c\n", p[13]);  //�ƹ��͵� �ȳ��� 
	
	printf("%d\n", p[0]);  //97
	printf("%d\n", p[1]);  //98
	printf("%d\n", p[2]);  //99
	printf("%d\n", p[3]);  //0
	
	 
	return 0;
}
