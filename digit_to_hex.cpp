#include<stdio.h>
char digit_to_hex(int n);
int main(void){
	int m;
	printf("Enter an integer: ");
	scanf("%d",&m);
	
	while(m){
		printf("%c",digit_to_hex(m%16));
		m = m/16;
	}
	
	return 0;
}

char digit_to_hex(int n){
	char *p = "0123456789ABCDEF";
	return p[n];
	
	/*return "0123456789ABCDEF"[n];   도 같은 결과이다. */
	
}
