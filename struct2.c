#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	typedef int PRICE; //PRICE ��� Ÿ���� ������� 
	
		
	typedef struct itemInfo{
		char name[16];
		PRICE price;	
	} INFO;
	
	struct itemInfo	item1 = {"computer", 1600}; 
	//�Ʊ� ������ �Ȱ���. �������� �����ϻ� 
	
	INFO item2;
	
	item2 = item1;  
	printf("%s, %d\n", item2.name, item2.price);

	return 0;
}
