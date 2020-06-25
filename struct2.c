#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	struct{
		char name[16];
		int price;	
	}item1 = {"computer", 1600}, item2;
	
	item2 = item1;
	
	printf("%s, %d\n", item2.name, item2.price);

	return 0;
}
