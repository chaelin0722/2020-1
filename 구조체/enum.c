#include<stdio.h>
enum mode{_INT, _REAL};

struct num{
	enum mode kind;
	union{
		int i;
		double r;
	}u;
};

void printNum(struct num n){
	if(n.kind == _INT) printf("%d\n", n.u.i);
	else printf("%lf\n", n.u.r);
	
}

int main(void){
	struct num m;
	m.kind = _INT ;
	m.u.i = 2020;
	printNum(m);
	m.kind = _REAL;
	m.u.r = 1234.56;
	printNum(m);  
	printf("%d",_INT);
	printf("%d",_REAL);
	return 0;
}
