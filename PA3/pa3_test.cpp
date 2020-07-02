#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){
	//암호화 복호화 
	int n[8]={1,1,1,0,0,1,1,1},i=0;
	int k=0;
	int result=0, mul=1;
	
	for(i=7;i>=0;i--){
		result += n[i] *(pow(2,(7-i)));
	}
	printf("%d",result);
	return 0;
}
