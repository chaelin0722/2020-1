#include <stdio.h>

struct num{
	int kind;
	union{
		int i;
		double r;
	}u;
};

void printNum(struct num n){
	if(n.kind ==0) printf("%d\n", n.u.i);
	else printf("%lf\n", n.u.r);
	
}

int main(void){
	struct num m;
	m.kind = 0 ;
	m.u.i = 2020;
	printNum(m);
	m.kind = 1;
	m.u.r = 1234.56;
	printNum(m);  
	
	return 0;
}

/*
union foo{
	int i;
	char c[4];
}; 
int main(void){
	union foo aa;
	aa.i = 12345678;
	int i;
	for(i=0;i<4;i++){
		printf("c[%d] = %X\n", i, aa.c[i]);
	}
	return 0;
}

*/
