#include<stdio.h>
#include<stdlib.h>

int main(void){
	int *p, sum, i , n;
	scanf("%d", &n);
	p = (int*)malloc(sizeof(int)*n);  //4*n ��ŭ �Ҵ��� �ش�.. 
	for(i=0;i<n;i++) scanf("%d", p+i); /* ������ &p[i] Ȥ�� &*(p+i) �� �ȴ�. 
												 &�� *�� ���Ǿ� �׳� p+i �� �Ǵ� ��! */
	for(i=0,sum=0; i<n; i++)  sum += p[i];//*(p+i);  //p[i] �� �� 
	printf("Sum = %d\n", sum);
	free(p); 

	return 0;
}
