#include<stdio.h>
#include<stdlib.h>

int main(void){
	int *p, sum, i , n;
	scanf("%d", &n);
	p = (int*)malloc(sizeof(int)*n);  //4*n 만큼 할당해 준다.. 
	for(i=0;i<n;i++) scanf("%d", p+i); /* 원래는 &p[i] 혹은 &*(p+i) 도 된다. 
												 &과 *가 상쇄되어 그냥 p+i 가 되는 것! */
	for(i=0,sum=0; i<n; i++)  sum += p[i];//*(p+i);  //p[i] 도 됨 
	printf("Sum = %d\n", sum);
	free(p); 

	return 0;
}
