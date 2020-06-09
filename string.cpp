#include<stdio.h>
int main(void){
	char *p;
	p = "abc";
	printf("%X\n", p); //abc의 주소 
	printf("%c\n",p[0]);
	printf("%c\n", p[1]); 
	printf("%c\n",p[2]);
	printf("%c\n", p[13]);  //아무것도 안나옴 
	
	printf("%d\n", p[0]);  //97
	printf("%d\n", p[1]);  //98
	printf("%d\n", p[2]);  //99
	printf("%d\n", p[3]);  //0
	
	 
	return 0;
}
