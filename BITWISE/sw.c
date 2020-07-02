#include <stdio.h>

int main(){
	char *str = 0;
	char *a = "Abcd";
	str = (char*)malloc(4);
	*str = *a;
	printf("%s\n", str);
	printf("%s", a);
	return 0;
}
