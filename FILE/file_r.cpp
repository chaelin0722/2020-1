#include<stdio.h>
#include<stdlib.h>

// �ι�° �����ص� ���� ������� ������ �Ȱ��� ��!  -> w,
//���� �̾���̴� a �� ���� ���� ����� Ŀ���� ���뵵 �������. 
// ���� ������ ����

int main(void) {
	unsigned char ch;
	FILE *fp;
	fp = fopen("chaelin.txt","r");
	if(!fp){
		printf("chaelin.txt does not exist! \n");
		exit(0);
	} 
	printf("%c\n", getc(fp));  //  A  , A�� ��ȯ�� ���ÿ� ���� �����͸� ����Ű�� �� 
	printf("%c\n",fgetc(fp));  //  B  , ���� C�� ����ų ���� 
	int i; 
	for(i=0;i<13;i++)	getc(fp);
	
	printf("%c\n", getc(fp));
	printf("%c\n", getc(fp));


/*	

	while((ch = getc(fp)) != EOF){
			printf("%c\n", ch);
	}
	
	
*/	
	fclose(fp);
	return 0;
}
