#include<stdio.h>
union sh{
	int i;
	unsigned char c[4];
};
char digit_to_hex_char(int digit){
	return "0123456789ABCDEF"[digit];
}
int main(void){
/*
	int i,j;
	union sh p,q;
	i = -1121;
	j = i>>3;
	
	p.i = i;
	q.i = j;
	
	printf("%d, %X, %X, %X, %X\n",p.i, p.c[3], p.c[2], p.c[1], p.c[0]);
	printf("%d, %X, %X, %X, %X\n",q.i, q.c[3], q.c[2], q.c[1], q.c[0]);
	
	*/
	digit_to_hex_char(98);
	return 0;
}
