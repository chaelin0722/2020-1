#include<stdio.h>
#include<stdlib.h>

// �ι�° �����ص� ���� ������� ������ �Ȱ��� ��!  -> w,
//���� �̾���̴� a �� ���� ���� ����� Ŀ���� ���뵵 �������. 
// ���� ������ ����

int main(void) {
	char ch;
	FILE *fp;
	fp = fopen("chaelin.txt","w");
	if(!fp){
		printf("chaelin.txt cannot be written!\n");
		exit(0);
	} 
	for(ch='A'; ch<='Z';ch++){
		fputc(ch, fp);
	}
	fclose(fp);
	return 0;
}
