#include <stdio.h>

union num{
	int i;
	double r;
};

printNum(union num n){
	printf("%d\n", n.i);
}

int main(void){
	union num m;
	m.i = 2002;
	printNum(m);
	
	return 0;
}
