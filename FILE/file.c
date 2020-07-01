// 보조기억장치 -> 파일  을 읽고 쓰고 하는 것..! cpu 뿐만 아니라 보조기억장치까지 다뤄보는것이 목표!
//기록 -> 파일로 출력한다. 
#include<stdio.h>
#include<stdlib.h>

int main(void){
	FILE *fp; 
	fp = fopen("data.txt","a");  //이어쓰기 모드 
	
	if(!fp){
		printf("data.txt cannot be written\n");
		exit(0);
	}
	
	/*
	//파일 열기 실패할때 
	if(fp == NULL){
		printf("data.txt does not exist! \n");
		exit(0);
	}
	*/
	fclose(fp);
	
	return 0;
} 
