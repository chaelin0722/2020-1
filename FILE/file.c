// ���������ġ -> ����  �� �а� ���� �ϴ� ��..! cpu �Ӹ� �ƴ϶� ���������ġ���� �ٷﺸ�°��� ��ǥ!
//��� -> ���Ϸ� ����Ѵ�. 
#include<stdio.h>
#include<stdlib.h>

int main(void){
	FILE *fp; 
	fp = fopen("data.txt","a");  //�̾�� ��� 
	
	if(!fp){
		printf("data.txt cannot be written\n");
		exit(0);
	}
	
	/*
	//���� ���� �����Ҷ� 
	if(fp == NULL){
		printf("data.txt does not exist! \n");
		exit(0);
	}
	*/
	fclose(fp);
	
	return 0;
} 
