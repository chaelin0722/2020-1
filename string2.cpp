#include<stdio.h>

int main(void){
	int i;
	char *p = "abcd";
	char q[4] = "abc";
	*(q+1) = 'B';
//	p[2] = 'C';  //segmentation fault ���� p[4] = "abc" ���� ��
/*


	q[4] = "abc" ������ q�� ���� �޸� ������ q[0] ~q[3]�� ���� ������ ���� ������ �ȴ�.
	���� "abc"�� ����� �޸� ������ �ٸ���.  
	
	q[0]~q[3]�� �޸� ������ �ٸ�����.. ���� ����� ������ ���⶧���� *(q+1) = 'B' �� ������.  

*/ 

	
	for(i=0;i<4;i++)   printf("%c", *(q+i));
	printf("\n");
	
	return 0;
} 
