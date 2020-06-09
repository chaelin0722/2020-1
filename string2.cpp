#include<stdio.h>

int main(void){
	int i;
	char *p = "abcd";
	char q[4] = "abc";
	*(q+1) = 'B';
//	p[2] = 'C';  //segmentation fault 만약 p[4] = "abc" 였음 됨
/*


	q[4] = "abc" 에서는 q를 위한 메모리 공간과 q[0] ~q[3]을 위한 공간이 따로 잡히게 된다.
	또한 "abc"가 저장된 메모리 공간이 다르다.  
	
	q[0]~q[3]의 메모리 공간은 다르지만.. 값이 저장된 순서는 같기때문에 *(q+1) = 'B' 가 가능함.  

*/ 

	
	for(i=0;i<4;i++)   printf("%c", *(q+i));
	printf("\n");
	
	return 0;
} 
