#include<stdio.h>
#include<stdlib.h>
int main(void){
	int i, data[10];
	char copy[10];
	FILE *fp1 = 0, *fp2 = 0;
	
	fp1 = fopen("data.txt", "w");
	for(i=0;i<10;i++)	data[i] =0x31323334;  //4321  x 10 번 입력  
	
	fwrite(data, 4, 10, fp1);
	fclose(fp1);
	
	fp2 = fopen("data.txt","r");
	fread(copy,1, 10, fp2);
	fclose(fp2);
	
	for(i=0;i<10;i++)	printf("%c ", copy[i]);  //4 3 2 1 이 10개 출력 즉, 4 3 2 1 4 3 2 1 4 3 
	printf("\n");
	return 0;
} 
