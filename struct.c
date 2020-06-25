#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	struct{
		char *name;
		int price;
		int weight;		
	}item1, item2, item3;
	
	item1.name = (char*)malloc(16);
	item2.name = (char*)malloc(16);
	item3.name = (char*)malloc(16);
	
	strcpy(item1.name, "Desk");
	strcpy(item2.name, "computer");
	strcpy(item3.name, "Mouse");
	
	item1.price = 600;
	item2.price = item1.price*6;
	item3.price = item1.price/10;
	
	printf("%s, %d\n", item2.name, item1.price+item2.price+item2.price);
	
	free(item1.name);
	free(item2.name);
	free(item3.name);
	
	
	return 0;
}
