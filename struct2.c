#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	typedef int PRICE; //PRICE 라는 타입이 만들어짐 
	
		
	typedef struct itemInfo{
		char name[16];
		PRICE price;	
	} INFO;
	
	struct itemInfo	item1 = {"computer", 1600}; 
	//아까 버전과 똑같다. 선언방식의 차이일뿐 
	
	INFO item2;
	
	item2 = item1;  
	printf("%s, %d\n", item2.name, item2.price);

	return 0;
}
