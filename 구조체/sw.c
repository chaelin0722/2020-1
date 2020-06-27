#include<stdio.h>

int main(void){
	int i = 0xABCDEF98;
	
	// 10101011 11001101 11101111 10011000
	// 00000000 00000000 00000000 00111111
	i |= 63;
	printf("%X\n", i);
	
	
	return 0;
}
