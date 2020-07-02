#include<stdio.h>
int main(void){
	FILE *fp = fopen("foo.txt","r");  
	int i;
	long int pos;
	for(i=0;i<11;i++)	getc(fp);  // 01234567890
	printf("%c\n", getc(fp));		// 1출력하고 3를 가리킴  
	fseek(fp, -4L, SEEK_CUR);		//8 출력하고 9를 가리킴 
	//다시 앞을 가리키고 싶다면! 
	//fseek(fp, 0L, SEEK_SET);      // 0
	pos = ftell(fp);
	printf("%c\n", getc(fp));     
	printf("%c\n", getc(fp));      
	printf("%c\n", getc(fp));      
	printf("%c\n", getc(fp));      
	fseek(fp, pos, SEEK_SET);
	printf("%c\n", getc(fp));
	
	return 0;
}
