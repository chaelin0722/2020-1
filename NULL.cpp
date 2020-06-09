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
	p = NULL;  //p 가 비었으니까 써도 된다고 프로그래머한테 알려주는 것  
	free(q);
	q = NULL;
	return 0;
	
}
