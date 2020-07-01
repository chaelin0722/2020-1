#include<stdio.h>
#include<stdlib.h>

// 두번째 실행해도 파일 사이즈와 내용은 똑같을 것!  -> w,
//만약 이어붙이는 a 를 쓰면 파일 사이즈도 커지고 내용도 길어진다. 
// 파일 생성과 실행

int main(void) {
	unsigned char ch;
	FILE *fp;
	fp = fopen("chaelin.txt","r");
	if(!fp){
		printf("chaelin.txt does not exist! \n");
		exit(0);
	} 
	printf("%c\n", getc(fp));  //  A  , A를 반환과 동시에 다음 데이터를 가리키게 됨 
	printf("%c\n",fgetc(fp));  //  B  , 이제 C를 가리킬 것임 
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
