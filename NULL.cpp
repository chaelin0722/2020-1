#include<stdio.h>
#include<stdlib.h>
void swap(int *x, int *y){
	int tmp;
	if(!x|| !y){
		printf("Empty pointer!\n");
		exit(0);
	}
	tmp = *x;
	*x = *y;
	*y = tmp;
}
int main(void){
	
	int *p=NULL, *q=NULL;
	if(!p)/*if p==NULL*/   p = (int*)malloc(sizeof(int));
	if(!q)   q = (int*)malloc(sizeof(int));
	*p = 10;
	*q = 20;
	swap(p,q); 
	
	/*
	int i=10, j=20;
	swap(&i, &j);*/
	printf("*p = %d, *q = %d\n", *p , *q); 
	free(p);
	p = NULL;  //p �� ������ϱ� �ᵵ �ȴٰ� ���α׷������� �˷��ִ� ��  
	free(q);
	q = NULL;
	return 0;
	
}
