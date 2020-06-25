#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct itemInfo{
		char name[16];
		int price;	
} INFO;
	
void printItem(struct itemInfo i){
	printf("%s: %d\n", i.name, i.price);
}
INFO setItem(char *n, int p){
	INFO item;
	strcpy(item.name, n);
	item.price = p;
	return item;
}
int main(void){

	INFO item1 = {"computer", 1600}; 
	INFO item2;
	
	item2 = setItem("Desk",600);
	printItem(item1);
	printItem(item2);
	return 0;
}
