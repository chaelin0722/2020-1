#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct itemInfo{
		char name[16];
		int price;	
} INFO;
	
INFO setItem(char *n, int p){
	INFO item;
	strcpy(item.name, n);
	item.price = p;
	return item;
}
int main(void){

	INFO item[10];
	item[0] = setItem("Desk",600);
	item[1] = setItem("computer", 1600); 
	INFO *iitem = 0;
	int i, total;
	iitem = (INFO*)malloc(sizeof(struct itemInfo) * 5);
	iitem[0] = setItem("Desk",600);
	iitem[1] = setItem("computer", 1200); 
	iitem[2] = setItem("Phone",200);
	iitem[3] = setItem("Laptop", 2000); 
	iitem[4] = setItem("pencil",1);

	for(i=0,total=0; i<5;i++){
		total += /* iitem[i].price; */ (iitem+i) -> price;
	}
	printf("Total price: %d\n", total);
	return 0;
}
